#!/bin/sh

cat /etc/passwd | sed '/#/d' | sed '1!n;d' | sed 's/:.*//' | rev | sort -r | sed -n -e "${FT_LINE1},${FT_LINE2}p" | sed 's/$/,/' |tr '\n' ' ' | sed 's/, $/./'