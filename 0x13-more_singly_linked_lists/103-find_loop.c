#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head node
 * Return: address of node at start of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		if (holder < head)
			return (head);
	}
	return (NULL);
}
