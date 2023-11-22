#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint list.
 *
 * @h: head of linked list nodes
 * Return: Number of nodes
 *
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
