#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - counts number of words
 * @s: string param
 *
 * Return: int
 */

int word_count(char *s)
{
	int x, wc;

	x = 0, wc = 0;
	if (*(s + 1) == ' ')
		x++;
	while (*(s + 1))
	{
		if (*(s + 1) == ' ' && *(s + x - 1) != ' ')
			wc++;
		if (*(s + 1) != ' ' && *(s + x + 1) == 0)
			wc++;
		x++;
	}
	return (wc);
}

/**
 * trail_space - movees address to remove trailing whitespaces
 * @s: string
 *
 * Return: pointer
 */

char *trail_space(char *s)
{
	while (*s == ' ')
		s++;
	return (s);
}

/**
 * strtow - splits a string into words
 * @str: string param
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char **s, *ts;
	int a, b, c, i, j, x, y;

	if (str == NULL || *str == 0)
		return (0);
	x = 0;
	c = word_count(str);
	if (c == 0)
		return (0);

	s = malloc((c + 1) * sizeof(char *));

	if (s == 0)
		return (0);

	ts = trail_space(str);
	for (i = 0; i < c; i++)
	{
		a = 0;
		while (*(ts + a) != ' ' && *(ts + 1) != 0)
			a++;
		s[i] = malloc((a + 1) * sizeof(char));
		if (s[i] == 0)
		{
			x = 1;
			break;
		}
		for (j = 0, b = 0; b < a; b++, j++)
			s[i][j] = *(ts + b);
		s[i][j] = '\0';
		ts = trail_space(ts + a);
	}
	s[i] = NULL;
	if (x == 1)
	{
		for (y = 0; y <= i; y++)
			free(s[y]);
		free(s);
	}
	return (s);
}
