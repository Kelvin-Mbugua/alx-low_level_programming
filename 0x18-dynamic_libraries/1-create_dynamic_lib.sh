#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedsntic -fpic *.c
gcc -shared -o liball.so *.o
