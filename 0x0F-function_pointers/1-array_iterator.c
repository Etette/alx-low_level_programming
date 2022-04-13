#include "function_pointers.h"

/**
 * array_iterator - executes a function as a given param on array elements
 * @array: array param
 * @size: size of array
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
