#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: destinaation string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*dest++ = *src++;
	return (p);
}

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer param
 * @old_size: int param
 * @new_size: int param
 * Return: reallocated pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *r = NULL;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		free(ptr);
		r = malloc(new_size);
		return (r);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	r = malloc(new_size);
	_memcpy(r, ptr, old_size);
	free(ptr);
	return (r);
}
