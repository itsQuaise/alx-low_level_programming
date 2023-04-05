#include "lists.h"

/**
 * reverse_listint - a funct that reverses a linked list
 * @head: pointer to the head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t  *initial, *former;

	if (head == NULL || *head == NULL)
		return (NULL);
	former = NULL;
	while ((*head)->next != NULL)
	{
		initial = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = initial;
	}
	(*head)->next = former;
	return (*head);
}
