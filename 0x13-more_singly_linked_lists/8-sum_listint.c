#include "lists.h"

/**
 * sum_listint - returns the sum of all data(n)
 * @head: pointer to head
 * Return: sum of all data of linkedlist
 */
int sum_listint(listint_t *head)
{
	/*listint_t *curr;*/

	int sum = 0;

	if (head == NULL)
		return (0);
	/*curr = head;*/
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
