#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @s: string param
 * Return: length of a string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string destination
 * @s2: string source
 * @n: size of string literal
 * Return: pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, len_1, len_2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_1 = _strlen(s1); /*get length of strings*/
	len_2 = _strlen(s2);
	if (n >= len_2)
		n = len_2;
	size = n + len_1;
	p = malloc(sizeof(char) * size + 1);
	if (!p) /*if (p == 0)*/
		return (NULL);
	for (i = 0; i < len_1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = 0;
	return (p);
}

