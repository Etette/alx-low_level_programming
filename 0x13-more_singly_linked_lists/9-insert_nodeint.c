#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to head pointer
 * @idx: given index
 * @n: int param
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	listint_t *new;

	register uint i;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);
	new->n = n;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr)
	{
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		i++;
		curr = curr->next;
	}
	free(new);
	return (NULL);
}
