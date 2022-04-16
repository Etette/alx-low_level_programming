#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 numbers
 * @argc: int param
 * @argv: char param
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul, lum;

	lum = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		lum = 1;
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	return (lum);
}
