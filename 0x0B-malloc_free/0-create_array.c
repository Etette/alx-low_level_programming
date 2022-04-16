#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize a specific char
 * @size: int param
 * @c: character param
 * Return: NULL is size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(c));

	if (!size || !arr)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
