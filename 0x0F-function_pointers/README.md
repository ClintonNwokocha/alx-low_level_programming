# 0x0F. Function Pointers in C

This repository contains exercises for learning about function pointers in C. The project involves understanding the concept of pointers to functions, their usage, and how they work in C programming.

## Description

Function pointers are pointers that are pointed to function addresses in memory. They are a powerful feature in C that allows dynamic function calls and callback functions, providing a way to pass around instructions on how to perform an operation or a series of operations.

## Objectives

- Understand what function pointers are and how to use them.
- Know what function pointers hold and where they point to in the virtual memory.
- Be able to implement and use function pointers in different scenarios.

## Environment

All files are compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Files

Each task in the project is contained in separate C files for modular and clear coding practices. Here is a list of functions and their descriptions:

### `0-print_name.c`
Function that prints a name using a function pointer to determine how it's printed.

### `1-array_iterator.c`
Function that executes a given function parameter on each element of an array.

### `2-int_index.c`
Function that searches for an integer in an array via a function pointer that defines the comparison logic.

### `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, `3-main.c`
Set of functions and a program that performs simple arithmetic operations based on function pointers to the corresponding arithmetic functions.

## Usage

Each file can be compiled separately with `gcc` and included in a main file to test the function functionalities as described above.

Example compilation:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name

