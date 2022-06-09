#include "lists.h"

/**
 * _create_node - create node at given location
 * @next: item to link node to
 * @n: number to store
 *
 * Return: address of node
 */
dlistint_t *_create_node(dlistint_t *next, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->next = next;
	node->n = n;
	if (next != NULL)
		next->prev = node;

	return (node);
}

/**
 * add_nodeint - add node at beginning of the list
 * @head: head of list
 * @n: number to store
 * Return: address of new node, NULL if failed
 */

dlistint_t *add_nodeint(dlistint_t **head, const n)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = _create_node(NULL, n);
		return (*head);
	}
	tmp = *head;
	while (tmp->prev != NULL)
		tmp = tmp->prev;
	*head = _create_node(tmp, n);
	return (*head);
}
