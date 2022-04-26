#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head pointer
 * Return: pointer to head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;

	if (!head || !(*head))
		return (*head);

	n = (*head)->next;

	while (n->next)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	if (n)
		n->next = p;
	return (*head);
}
