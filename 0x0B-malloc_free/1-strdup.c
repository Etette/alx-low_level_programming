#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns length of a string
 * @s: string s
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * _strdup - pointer to a new string in memory which
 * contains a duplicate of the string
 * @str: duplicate string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *newString, *_newString;

	if (!str)
		return (NULL);
	newString = malloc((_strlen(str) + 1) * sizeof(char));
	/*check for sufficient memory*/
	if (!newString)
		return (NULL);
	while (*str)
	{
		*_newString = *str;
		str++;
		_newString++;
	}
	*_newString = '\0';
	return (newString);
}
