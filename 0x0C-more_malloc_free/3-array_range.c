#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		array[i] = min;
	return (array);
}
