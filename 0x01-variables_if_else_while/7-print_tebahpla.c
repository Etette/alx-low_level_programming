#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: print alphabet set in reverse
 * Return: 0
 */

int main(void)
{
	char  i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n')
	return (0);
}
