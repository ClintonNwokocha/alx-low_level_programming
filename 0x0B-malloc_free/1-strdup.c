#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	new_str[len] = '\0';

	return (new_str);
}

