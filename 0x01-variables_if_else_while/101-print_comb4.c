#include <stdio.h>

/**
 * main - main block
 * Description: print all possible combinatins of three numbers
 * Return: 0
 */

int main(void)
{
	int n, l, m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (n < m && m < l)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n == '7' && m == '8' && l == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
