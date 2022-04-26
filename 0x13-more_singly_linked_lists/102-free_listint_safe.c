#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 *@h: pointer to pointer h
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	int diff;

	register short count = 0;

	if (!h || !(*h))
		return (count);
	current = *h;

	while (current)
	{
		diff = current - current->next;
		if (diff > 0)
		{
			next = current->next;
			free(current);
			current = next;
			count++;
		}
		else
		{
			free(current);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
