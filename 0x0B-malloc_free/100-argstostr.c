#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concates all arguments of a program
 * @ac: int param
 * @av: char param
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, length;

	if (ac == 0 || av == 0)
		return (NULL);

	i = length = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
		i++;
	}
	length++;
	str = malloc(length * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
