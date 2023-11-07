#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to duplicate.
 * Return: A pointer to the duplicated string or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	duplicate[len] = '\0';
	return (duplicate);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: A pointer to the new struct dog or NULL if its fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = _strdup(name);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->age = age;

	ndog->owner = _strdup(owner);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	return (ndog);
}
