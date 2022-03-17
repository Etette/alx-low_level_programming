#include <stdio.h>

/**
 * main - prints "fizz" for numbers divisible by 3
 * prints "Buzz" for numbers divisible by 5
 * prints "FizzBuzz" for numbers divisible by 3 and 5
 * for numbers 1-100
 * Return: 0
 */

int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
