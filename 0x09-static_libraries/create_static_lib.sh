#!/bin/bash
cc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *.o
gcc main.c -L. -lall -o main
