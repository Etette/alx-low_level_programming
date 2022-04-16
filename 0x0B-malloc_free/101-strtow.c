#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_space(char c);

/**
 * count_word - counts number of words
 * @s: string param
 *
 * Return: int
 */

int count_word(char *s)
{
	int i = 0;
	int j = 0;

	while (*s)
	{
		if (is_space(*s) && i)
			i = 0;
		else if (is_space(*s) && !i)
		{
			i = 1;
			j++;
		}
		s++;
	}
	return (j);
}

/**
 * is_space - check if char is  ' '
 * @c: char param
 *
 * Return: 1 if true
 */

int is_space(char c)
{
	return (c == ' ');
}
/**
 * strt - returns 1st index of non-space char
 * @s: char param
 * @ind: start index
 * Return: 1st char index
 */

int strt(char *s, int ind)
{
	while (is_space(*(s + ind)))
		ind++;
	return (ind);
}

/**
 * _end - returns last index of non space char
 * @s: char param
 * @ind: start index
 * Return: index of last non space char
 */

int _end(char *s, int ind)
{
	while (!is_space(*(s + ind)))
		ind++;
	return (ind);
}

/**
 * strtow - splits a string into words
 * @str: string param
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char **s;
	int i, k, l, start, end_, j = 0;

	if (!str || !count_word(str) || !*str)
		return (NULL);
	s = malloc(sizeof(char *) * (count_word(str) + 1));
	if (!s)
		return (NULL);

	for (i = 0; i < count_word(str); i++)
	{
		start = strt(str, j);
		end_ = _end(str, start);
		l = end_ - start;
		s[i] = malloc(sizeof(char) * l + 1);

		if (!s[i])
			return (NULL);
		for (k = 0; k < l; k++)
			s[i][k] = str[start++];
		s[i][k++] = 0;
		j = end_ + 1;
	}
	s[i] = NULL;
	return (s);
}
