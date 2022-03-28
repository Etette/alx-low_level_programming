#include "main.h"

/**
 * _memcpy - cpy meomory area
 * @dest: destination param
 * @src: source param
 * @n: bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*dest++ = *src++;
	return (p);
}
