#include "lists.h"

/**
 * pop_listint - a funct the del the head note n return head note data
 * @head: a pounter to the adreess of head
 * Return: 0 if linked list in empty otherwise headnote data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);
	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (ret);
}
