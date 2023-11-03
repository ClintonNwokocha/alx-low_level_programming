# 0x0C. More malloc, free

This project is part of the curriculum of the ALX Software Engineering program. In this project, I dive deeper into dynamic memory allocation in C, exploring the use of `malloc`, `free`, and the process of manually managing memory.

## Learning Objectives

- Understanding the use of `exit` function.
- How to use `calloc` and `realloc` from the standard library (though they are not allowed in the project tasks).
- Dynamically allocating memory using `malloc`.
- Releasing memory using `free`.

## Environment

- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Style guidelines: Betty style

## Files in the Project

| Filename | Description |
| -------- | ----------- |
| `0-malloc_checked.c` | Function that allocates memory using `malloc`. |
| `1-string_nconcat.c` | Function that concatenates two strings. |
| `2-calloc.c` | Function that allocates memory for an array, using `malloc` and sets the memory to zero. |
| `3-array_range.c` | Function that creates an array of integers. |
| `main.h` | Header file containing all function prototypes used in this project. |

## Usage

Each file contains a function that can be compiled with `gcc` and included in a C program. For example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o prog

