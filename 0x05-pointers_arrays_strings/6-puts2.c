#include "main.h"
/**
 * main - Print every other character of a string,
 * taring with the first character.
 * @str: string value
 * Return: string character
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
