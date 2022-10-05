#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGO_H

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: int
 * @index: index of node in the list
 * @next: pointer to next node
 *
 * Description: singly linked list struct
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with express lane
 * @n: int
 * @index: index of node
 * @next: pointer to next node
 * @express: pointer to next node in express lane
 *
 * Description: singly linked list with express lane
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/*------ mandatory------*/
int linear_search(int *array, size_t size, int value);
void printArray(int *array, size_t start, size_t end);
int binary_search(int *array, size_t size, int value);

/*------- advanced ---*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
