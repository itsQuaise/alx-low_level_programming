#include "lists.h"

/**
 * listint_len - a program that returns no of elements in listin_t
 * @h:  a pointer to the head
 * Return: ELements in listin_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
