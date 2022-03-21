#include "main.h"

/**
 * _strcpy - copy the string in src to dest
 * @dest: destination character
 * @src: source character
 * Return: copy character in destination
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
