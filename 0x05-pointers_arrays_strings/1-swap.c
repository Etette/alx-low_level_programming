#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to integer 1.
 * @b: pointer to integer 2.
 */

void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
