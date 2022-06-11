#!/bin/zsh

PROJECT=C42
FOLDER=~/code
TMPCLONE=~/code/tmp-evaltools

#git clone address $FOLDER/$PROJECT
git clone git@github.com:H3x4Core/piscine42-evaltools.git $TMPCLONE

cd $FOLDER/$PROJECT

find * -type f | grep -v 'ft_'
norminette -R CheckForbiddenSourceHeader

find $TMPCLONE/$PROJECT/ -name 'main.c' -exec cp -r "{}" $FOLDER/$PROJECT  \;

#cp -r $TMPCLONE/$PROJECT/* $FOLDER/$PROJECT/
#rm -rf $TMPCLONE
