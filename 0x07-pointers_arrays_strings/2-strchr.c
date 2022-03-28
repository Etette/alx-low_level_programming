#include "main.h"

/**
 * _strchr - locate a character in a string constant
 * @s: string to be looped
 * @c: target char
 * Return: pointer to first occurance of c else return '\0'
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
