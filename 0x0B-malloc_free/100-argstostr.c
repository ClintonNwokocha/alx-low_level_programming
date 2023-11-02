#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_length;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length for the new string */
	for (i = total_length = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* For the newline character */
	}

	/* +1 for the null terminator */
	new_str = malloc(sizeof(char) * (total_length + 1));
	if (new_str == NULL)
		return (NULL);

	/* Copy arguments into new string */
	for (i = k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			new_str[k++] = av[i][j];
		new_str[k++] = '\n'; /* Add newline after each argument */
	}

	new_str[k] = '\0'; /* Null-terminate the string */
	return (new_str);
}

