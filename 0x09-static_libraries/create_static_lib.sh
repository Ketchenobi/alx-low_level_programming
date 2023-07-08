#!/bin/bash

# Compile each .c file into an object file
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from the object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a
