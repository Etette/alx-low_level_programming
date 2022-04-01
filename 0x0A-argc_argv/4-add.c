#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: int param
 * @argv: char param
 * Return: 1
 */
int main(int argc, char **argv)
{
	int i, j, res = 0;

	if (argc > 1)
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
				if (argv[i][j] < '0' || argv[i][j] > '9')
					return (printf("Error\n"), 1);
			res += atoi(argv[i]);
		}
	printf("%i\n", res);
	return (0);
}
