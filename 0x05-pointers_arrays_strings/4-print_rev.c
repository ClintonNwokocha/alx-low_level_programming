#include "main.h"
/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: String to be printed
 * Return: String
 */
void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
