#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: ponter to an array of integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Returns: Index of the first element for which cmp does not return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
