#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int res;

	if (!(*head) || !head)
		return (0);
	curr = *head;
	res = curr->n;
	*head = (*head)->next;
	free(curr);

	return (res);
}
