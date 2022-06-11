#!/bin/zsh

PROJECT=C42
FOLDER=~/goinfre

echo --- REMOVE main.c FROM $FOLDER/$PROJECT ---
find $FOLDER/$PROJECT -name 'main.c' -print -delete
find $FOLDER/$PROJECT -name 'a.o' -print -delete