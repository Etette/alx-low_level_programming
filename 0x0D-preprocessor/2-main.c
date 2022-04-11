#include <stdio.h>

/**
 * main - print name of file from which the program was compiled
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
