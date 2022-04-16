#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments followed by a newline
 * @argc: int param
 * @argv: char param
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum = 0;

	(void)argv;
	while (--argc)
		sum++;
	printf("%i\n", sum);
	return (0);
}
