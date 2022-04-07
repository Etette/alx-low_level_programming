#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum integer value
 * @max: maximum integer value
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i, array_length;
	int *p;

	if (min > max)
		return (NULL);
	array_length = max - min + 1;
	p = malloc(sizeof(int) * array_length);
	if (p == 0) /*if (!p)*/
		return (NULL);
	for (i = 0; i < array_length; i++)
		p[i] = min++;
	return (p);
}
