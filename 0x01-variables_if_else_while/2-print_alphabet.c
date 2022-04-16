#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print a lowercase of alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
