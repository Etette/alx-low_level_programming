#include "main.h"

/**
 * factorial - return the factorial of n
 * @n: int params
 * Return: factorial of input
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
