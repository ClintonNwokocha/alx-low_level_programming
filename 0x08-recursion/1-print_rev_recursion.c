#include "main.h"
/**
 * function_name - Short description of the function's purpose
 * @param_name: Description of parameter
 *
 * Return: Description of return value, if any
 */

void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return;
    _print_rev_recursion(s + 1);
    _putchar(*s);
}

