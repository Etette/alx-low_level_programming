#include "main.h"

/**
 * puts2 - prints other character of a string
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
