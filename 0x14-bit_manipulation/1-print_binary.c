#include "main.h"
#define BIT_SIZE 8

/**
 * _powX - raises a number to power p
 * @b: base
 * @p: power
 * Return: b to pwer of p
 */

unsigned long int _powX(int b, int p)
{
	unsigned long int ans = 1;

	while (p)
	{
		ans *= b;
		p--;
	}
	return (ans);
}

/**
 * print_binary - prints binary of a num
 * @n: intput integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int test = _powX(2, sizeof(unsigned long int) * BIT_SIZE - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (test)
	{
		if (!(test & n) && start)
		{
			_putchar('0');
		}
		else if (test & n)
		{
			_putchar('1');
			start = 1;
		}
		test = test >> 1;
	}
}
