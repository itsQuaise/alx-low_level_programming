#include "lists.h"

/**
 * add_nodeint - a funct that add a new node at the begining of listint_t
 * @head: pointer to the address of the head
 * @n: integer
 * Return: the address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
