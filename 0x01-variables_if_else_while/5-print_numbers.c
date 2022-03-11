#include <stdio.h>

/**
 * main - Entry block
 * Description: print single digits less than 10
 * Return: 0
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
