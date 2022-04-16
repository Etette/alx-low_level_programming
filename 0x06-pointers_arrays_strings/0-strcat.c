#include "main.h"
/**
 * *_strcat - function thaat concats two strings
 * @dest: the destination string to be concatinated
 * @src: the source string
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
