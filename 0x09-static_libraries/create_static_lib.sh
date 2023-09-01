#!/bin/bash
c_files=(ls *.c)
gcc -c $c_files
o_files=$(ls *.o)
ar -rc liball.a $o_files
rm $o_files
