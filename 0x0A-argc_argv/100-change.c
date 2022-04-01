#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * returnCents - calculate min coin needed to make change
 * @n: target change value
 * Return: min num of coins
 */

int returnCents(int n)
{
	int coins = 0;

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		coins++;
	}
	return (coins);
}

/**
 * main - prints min number of coins
 * @argc: int param
 * @argv: char param
 * Return: 0
 */

int main(int argc, char **argv)
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", returnCents(number));
	return (0);
}
