#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 * @s: char array
 * Return: 1
 */

int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;

	if (*s == '-')
		i++;
	for (; *(s + 1) != 0; i++)
	{
		d = isdigit(*(s + 1));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - add positive numbers
 * @argc: int param
 * @argv: char param
 * Return: 1
 */
int main(int argc, char **argv)
{
	int i, j, res;

	res = 0, j = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				j += atoi(argv[i]);
			else
				res = 1;
		}
	}
	if (res == 0)
		printf("%i\n", j);
	else
		printf("%s\n", "Error");
	return (res);
}
