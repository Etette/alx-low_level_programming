#include "lists.h"

/**
 * list_len - returns the number of elements ina linked list_t list
 * @h: head of linked list
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	register unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
