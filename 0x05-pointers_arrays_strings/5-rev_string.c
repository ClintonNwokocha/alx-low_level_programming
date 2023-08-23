#include "main.h"
/**
 * rev_string - reverse a string
 * @s: String variable
 * Return: reversed string
 */
void rev_string(char *s)
{
	int lenght = 0;
	int start, end;
	int temp;

	/* Calculate the lenght of the string*/
	while (s[lenght] != '\0')
	{
		lenght++;
	}

	/* Initialize the start and end pointers*/
	start = 0;
	end = lenght - 1;

	/* Swap values until pointers meet or cross*/
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/*  move pointers*/
		start++;
		end--;
	}
}
