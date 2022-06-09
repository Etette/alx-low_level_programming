#include "lists.h"

/**
 * dlistint_len - return number of elements in a list
 * @h: pointer to head
 *
 * Return: number of nodes in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	int i;

	if (h == NULL)
	{
		return (0);
	}
	i = 1;
	tmp = h->prev;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->prev;
	}
	tmp = h->next;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
