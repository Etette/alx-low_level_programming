#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of ints
 * @list: pointer to head of the skip list
 * @value: valueto search
 * Return: pointer to first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL;

	if (list)
	{
		while (value > list->n && list->next)
		{
			tmp = list;
			list = list->express;
			if (!list)
			{
				list = tmp;
				while (list->next)
					list = list->next;
			}
			if (list != tmp->express)
				break;
			printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", tmp->index, list->index);
		while (tmp && tmp->index <= list->index)
		{
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
			if (value == tmp->n)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
