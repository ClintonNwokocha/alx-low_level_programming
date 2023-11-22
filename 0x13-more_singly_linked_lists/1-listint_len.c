#include "lists.h"
/**
 * listint_len - function that returns number of elements
 * @h: pointer to head
 * Return: numbers of element in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
