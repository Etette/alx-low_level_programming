#include "main.h"

/**
 * print_line - print line of variable length
 * @n : the number of '-' characters to use
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
