#!/bin/zsh

# --- SETTINGS ---
#PATH
FOLDER=~/goinfre
PROJECT=C42

# 42 REPO
REPOPROJECT=git@vogsphere.42lausanne.ch:vogsphere/YOURPROJECTREPO

# EVALTOOL FILES
REPOEVALTOOL=https://github.com/H3x4Core/piscine42-evaltools.git
TMPCLONE=~/goinfre/evaltools-tmp

# READ THE FILE BEFORE MESSING WITH THIS ;)
IUNDERSTAND=0

# COLOR
RED="\033[1;31m"
GREEN="\033[1;32m"
NOCOLOR="\033[0m"

# --- DISCLAMER ---
	echo "=================================================================================================================="
	echo -e "${GREEN}EVAL TOOL 0.1a${NOCOLOR}"
	echo -e "${RED}By using this script you understand what it is doing and take the entire liability of any action it may perform${NOCOLOR}"
	echo 
	echo "You need to configure it with the project you want to evaluate"
	echo "The \"main.c\" cloned do not warranty to test anything correctly"
	echo "Feel free to contact me if you want to improve this project"
	echo "=================================================================================================================="

if [ $IUNDERSTAND -eq 0 ] 
then
	exit 0
fi

# --- CHECK SETTINGS ---
echo --- SETTINGS ---
echo FOLDER: $FOLDER
echo PROJECT: $PROJECT
echo REPOPROJECT: $REPOPROJECT
echo -e "TMPCLONE: $TMPCLONE ${RED}WILL BE CLEANED DURING PROCESS${NOCOLOR}" 
echo Press enter to continue or "Ctrl + c" to abort    
read

# --- CLONE ---
echo --- CLONE PROJECT ---
git clone --depth=1 $REPOPROJECT $FOLDER/$PROJECT

echo --- CLONE EVALTOOLS ---
git clone --depth=1 $REPOEVALTOOL $TMPCLONE

# --- FILE CHECK ---
echo --- FILES CHECK ---
find $FOLDER/$PROJECT -type f | grep 'ft_'
COUNT_EX=$(find $FOLDER/$PROJECT -type f | grep -c 'ft_' | tr -d '\012\015') # count nbr present ft_files

echo --- UNEXPECTED FILE CHECK ---
find $FOLDER/$PROJECT -type f | grep -v 'ft_\|.git'

echo --- CHECK NORMINETTE ---
find $FOLDER/$PROJECT -type f -name 'ft_*' -exec norminette -R CheckForbiddenSourceHeader {} \;

echo ... copy main.c
cp -r $TMPCLONE/$PROJECT/* $FOLDER/$PROJECT/

# --- CLEAN TMP ---

echo -e "${RED}... REMOVE $TMPCLONE ? (Ctrl + C) to abort${NOCOLOR}"
read
rm -rf $TMPCLONE

# --- COMPILING ---
echo --- COMPILING ---
i=0
di=0
while [ $i -lt $COUNT_EX ]
do
	di=`expr $i + 1`
	echo Task $di on $COUNT_EX
	if [ $i -lt 10 ] 
	then
		echo ... PROCESSING ex0$i
		gcc -Wall -Wextra -Werror -o $FOLDER/$PROJECT/ex0$i/a.o $FOLDER/$PROJECT/ex0$i/main.c
		find $FOLDER/$PROJECT/ex0$i -type f -name a.o
	fi
	if [ $i -ge 10 ]
	then
		echo ... PROCESSING ex$i
		gcc -Wall -Wextra -Werror -o $FOLDER/$PROJECT/ex$i/a.o $FOLDER/$PROJECT/ex$i/main.c
		find $FOLDER/$PROJECT/ex0$i -type f -name a.o
	fi
   i=`expr $i + 1`
done

# --- RUN ---
echo --- RUN ---
i=0
while [ $i -lt $COUNT_EX ] 
do
		if [ $i -lt 10 ] 
	then
		echo ... Run ex0$i
		echo -n Press enter to continue or "Ctrl + c" to abort    
		read
		echo --- START OUTPUT ---
		echo
		$FOLDER/$PROJECT/ex0$i/a.o
		echo
		echo --- END OUTPUT ---
		echo exited with code $?
	fi
	if [ $i -ge 10 ]
	then
		echo ... Run ex$i
		echo -n Press enter to continue or "Ctrl + c" to abort    
		read
		echo --- START OUTPUT ---
		echo
		$FOLDER/$PROJECT/ex$i/a.o
		echo
		echo --- END OUTPUT ---
		echo exited with code $?
	fi
	i=`expr $i + 1`
done
