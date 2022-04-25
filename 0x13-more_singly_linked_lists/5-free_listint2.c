#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *tmp;

	if (!head)
		return;
	curr = *head;
	while (curr)
	{
		tmp = curr;
		curr = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
