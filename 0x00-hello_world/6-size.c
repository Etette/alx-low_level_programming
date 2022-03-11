#include <stdio.h>
/**
 * main - prints sizes of character
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
