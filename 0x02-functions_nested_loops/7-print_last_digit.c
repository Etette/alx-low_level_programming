#include "main.h"

/**
 * print_last_digit - main block
 * @n: number
 *
 * Return: 1 on success
 * On error, return -1
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
