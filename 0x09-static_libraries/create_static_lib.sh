#!/bin/bash
gcc -Wall -Werror -Werror -pedantic -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
