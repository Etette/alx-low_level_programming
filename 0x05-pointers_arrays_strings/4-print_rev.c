#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	for (size--; size >= 0; size--)
	{
		_putchar(s[size]);
	}
	_putchar(10);
}
