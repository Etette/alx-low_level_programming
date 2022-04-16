#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}

/**
 * _calloc - allocate memory for an array
 * @nmemb: int param
 * @size: int param
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p) /*if (p == 0)*/
		return (NULL);
	_memset(p, 0, size * nmemb);
	return (p);
}
