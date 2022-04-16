#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: str1 param
 * @s2: str2 param
 * Return: pointer to memory
 */

char *str_concat(char *s1, char *s2)
{
	char *A, *B;
	int i, j, len1, len2;

	B = "";
	if (s1 == NULL)
		s1 = B;
	if (s2 == NULL)
		s2 = B;
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	A = malloc((len1 + len2) * sizeof(*s1));
	if (A == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		A[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		A[i] = s2[j];
		i++;
		j++;
	}
	return (A);
}
