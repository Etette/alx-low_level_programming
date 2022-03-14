#include <stdio.h>

/**
 * main - main block
 * Description: print all posible combination of two two-digit numbers
 * Return: 0:
 */

int main(void)
{
	int x;
	int y;

	x = 48;

	while (x < 57)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			if (y != 57 || x != 56)
			{
				putchar('.');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');


return (0);
}
