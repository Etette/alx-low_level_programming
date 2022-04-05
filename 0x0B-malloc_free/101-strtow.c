#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - counts number of words
 * @s: string param
 *@size: int param
 * Return: int
 */

int word_count(char *s, int size)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			while (i < size && s[i] != ' ')
				i++;
			count++;
		}
	}
	return (count);
}

/**
 * strlen_recur - length of a string
 * @s: char pointer
 *
 * Return: int variable
 */

int strlen_recur(char *s)
{
	if (*s != '\0')
		return (1 + strlen_recur(++s));
	return (0);
}

/**
 * strtow - splits a string into words
 * @str: string param
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char *strcp, **strcon;
	int len = 0, nw; /*noWords*/

	if (str == NULL || str[0] == 0)
		return (NULL);

	strcp = str;
	len = strlen_recur(strcp);
	nw = word_count(str, len);

	if (nw < 1)
		return (NULL);

	strcon = malloc((nw + 1) * sizeof(char *));
	strcon[0] = malloc(sizeof(char) * 1 + 1);
	return (strcon);
}
