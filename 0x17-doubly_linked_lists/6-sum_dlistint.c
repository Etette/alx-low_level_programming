#include "lists.h"

/**
 * sum_dlistint - find sum of elements in the list
 * @head: pointer to head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
