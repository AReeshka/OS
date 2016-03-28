#!/bin/bash
for i in `find -L $1`
do
if  -L "$i" -a [  $(stat -c %Y "$i") -lt $(($(date +%s) - $(604800))) ]
then
echo "$i"
fi
done
