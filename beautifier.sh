#!/usr/bin/env bash

## Author: Dario Cruz 2017 - Lustig lab

## Simple bash script for CXX, HXX code beautification. NOTE: astyle needs to 
## be installed in your system, for more info please visit: 
## https://sourceforge.net/projects/astyle/files/

## Note for developers: This script will format the code consistently to 
## the projects. Its important to keep the same format throughout
## the whole source files. Run this script BEFORE committing any code.

# Check if astyle exists

command -v astyle dummy.c >/dev/null 2>&1 || 
{ echo >&2 "astyle is not installed in your system, please visit 
        https://sourceforge.net/projects/astyle/files/ for more info"; exit 1; }

# Check input

[ "$#" -lt 1 ] && printf "No arguments were given, exiting ...\n" && exit 

# Might not be the best way, but its sufficient enough

for input in "$@"
do
		total_input=$total_input$" "$input
done

echo "Beautifying..."

# Variables

create_org_file="n" # Create a backup file .org before beautification (y/n)
style="java"
indent_space="2"

# If astyle exists and arguments were given, then execute beautifier

astyle -$create_org_file --style=$style --indent=spaces=$indent_space \
       --indent-switches --pad-oper $total_input
