#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 * @head: pointer to head pointer
 * @n: int param
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *curr;

	curr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (curr != NULL && curr->next != NULL)
		curr = curr->next;
	if (curr != NULL)
		curr->next = new;
	else
		*head = new;
	return (new);
}
