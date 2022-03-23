#include "main.h"

/**
 * *_strncat - concat two words
 * @dest: pointer to param
 * @src: pointer to param
 * @n: int param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	for (y = 0; y < 1000; y++)
	{
		if (dest[y] == '\0')
		{
			break;
		}
		x++;
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
