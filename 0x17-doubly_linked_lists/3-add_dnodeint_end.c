#include "lists.h"

/**
 * _create_node - creates node at given location
 * @next: item to link this node
 * @n: nuber to store
 * Return: address of node
 */
dlistint_t _create_node(dlistint_t *next, const int n)
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
 * add_dnodeint_end - add node at end of list
 * @head: pointer to head
 * @n: number to score
 *
 * Return: address of new node, NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = _create_node(NULL, n);
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = _create_node(NULL, n);
	tmp->next->prev = tmp;
	return (tmp->next);
}
