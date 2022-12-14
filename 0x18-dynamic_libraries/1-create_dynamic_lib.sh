#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fpic *.c
nm liball.so *.o
ldd liball.so
