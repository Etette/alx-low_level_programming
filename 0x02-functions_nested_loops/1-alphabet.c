#include "main.h"

/**
 * print_alphabet - main block
 * Description: print alphabets in lowercase
 * Return: on success 1.
 * On error, -1 is returned and errno is set appropriately
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		_putchar(c);
	_putchar('\n');
}
