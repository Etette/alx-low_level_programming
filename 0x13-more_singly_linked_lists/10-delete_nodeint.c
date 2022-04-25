#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head pointer
 * @index: position of node
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *next;

	register uint i;

	if (!head || !(*head))
		return (FAILURE);
	curr = *head;
	if (!index)
	{
		*head = curr->next;
		free(curr);
		return (SUCCESS);
	}
	for (i = 0; curr && i < index - 1; i++)
		curr = curr->next;
	if (!curr || !(curr->next))
		return (FAILURE);
	next = curr->next->next;
	free(curr->next);
	curr->next = next;
	return (SUCCESS);
}
