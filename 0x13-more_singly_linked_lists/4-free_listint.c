#include "lists.h"

/**
 * free_listint - free listint_t list
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
