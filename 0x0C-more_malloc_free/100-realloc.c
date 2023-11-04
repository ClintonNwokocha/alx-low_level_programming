#include "main.h"
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 * Return: pointer to the newly allocated memory, or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;
	unsigned int size_to_copy;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_block = malloc(new_size);
	if (new_block == NULL)
	{
		return (NULL);
	}
	size_to_copy = (old_size < new_size) ? old_size : new_size;
	memcpy(new_block, ptr, size_to_copy);
	free(ptr);
	return (new_block);
}
