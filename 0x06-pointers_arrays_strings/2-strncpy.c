#include "main.h"

/**
 * *_strncpy - coopy two strings
 * @dest: pointer to char param
 * @src: pointer to char param
 * @n: int param
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
