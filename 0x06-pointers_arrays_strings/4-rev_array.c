#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: pointer to int param
 * @n: pointer to int param
 * Return: n
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j++;
	}
}
