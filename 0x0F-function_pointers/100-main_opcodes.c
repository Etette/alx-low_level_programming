#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of the function
 * @argc: Number of args given
 * @argv: args of number of bytes to print
 * Return: 0 on success, print erro for errors, exit value 1 if
 * incorrect
 */

int main( int argc, char **argv)
{
	char *add;
	int i, bytes;

	if (argc != 2)
	{
		printf("Erro\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)&main;
	bytes = atoi(argv[1]);
	i = 0;

	while (i < bytes - 1)
	{
		printf("%02hhx ", add[i]);
		i++;
	}
	printf("%02hhx\n", add[i]);
	return (0);
}
