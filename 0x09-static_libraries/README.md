0x09. C - Static Libraries
This project is an introduction to static libraries in C. Here, we implement a few utility functions and then bundle them into a static library.

Files & Descriptions:
main.h

The header file that contains all the function prototypes used in this project.
_strlen.c

A custom implementation of the strlen function. It returns the length of a string.
libmy.a

The static library that bundles our utility functions.
my_script.sh (If you have this or similar scripts)

A bash script that does XYZ. (Replace 'XYZ' with the appropriate description)
Usage
Include main.h in your main program.
Compile your program with gcc main_program.c -L. -lmy to link the static library.
Author
Clinton Nwokocha
