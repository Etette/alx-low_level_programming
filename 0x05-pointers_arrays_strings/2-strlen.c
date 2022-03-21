#include "main.h"

/**
 * _strlen - count the length of a string or array
 * @s: string.
 * Return: Length.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; (*s++ != 0);)
		c++;
	return (c);
}
