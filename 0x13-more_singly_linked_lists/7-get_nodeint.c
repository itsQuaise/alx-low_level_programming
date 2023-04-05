#include "lists.h"

/**
 * get_nodeint_at_index - a funct that returns nth node of a linked list
 * @head: a pointer to the heasd
 * @index: the index of a node to locate
 * Return: NULL if node does not exist or the located node if exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
