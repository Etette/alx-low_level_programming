#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of listint_t list
 * @head: pointer to head
 * @index: index of node
 * Return: address of node at input index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;

	register uint count = 0;

	curr = head;
	while (curr)
	{
		if (count == index)
			return (curr);
		count++;
		curr = curr->next;
	}
	return (curr);
}
