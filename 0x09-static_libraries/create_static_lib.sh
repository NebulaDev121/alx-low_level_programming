#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from the .o files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the .o files
rm -f *.o
