#include "main.h"

/**
 * prime - helper function for is_prime
 * @n: int param
 * @i: iterator
 * Return: 1 if true
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}

/**
 * is_prime_number - returns true if int is prime number
 * @n: int param
 * Return: 1 if int is prime number
 *
 */

int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (prime(n, n - 1));
}
