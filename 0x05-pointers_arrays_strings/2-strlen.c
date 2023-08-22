#include "main.h"
/**
 * _strlen - returns the lenght of the string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;
	while(*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
