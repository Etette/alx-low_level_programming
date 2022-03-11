#include <stdio.h>

/**
 * main - main block
 * Description: Output i < 10 without char, use pue putchar. n/b: 0 = ASCII 48
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}
