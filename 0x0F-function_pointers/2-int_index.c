#include "function_pointers.h"

/**
 * int_index - seaarch for an integer
 * @array: array containing integers
 * @size: size of array
 * @cmp: function pointer to compare values of array elements
 * Return: index of found integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
