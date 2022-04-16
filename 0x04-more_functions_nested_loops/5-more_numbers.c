#include "main.h"

/**
 * more_numbers - print numbers btween 0 and 14 inclusive
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar(x / 10 + 48);
			_putchar(x % 10 + 48);
		}
		_putchar('\n');
	}
}
