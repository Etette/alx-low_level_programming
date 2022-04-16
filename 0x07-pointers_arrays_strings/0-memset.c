#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of the memory
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}
