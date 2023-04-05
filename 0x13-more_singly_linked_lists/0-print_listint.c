#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all elements of listint_t
 * @h: a pointer to the header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
