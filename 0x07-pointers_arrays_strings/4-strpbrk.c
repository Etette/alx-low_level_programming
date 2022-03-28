#include "main.h"

/**
 * _strpbrk - search a string constant for set of bytes
 * @s: char param
 * @accept: bytes to be accepted
 * Return: pointer that matches accept else return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return ('\0');
}
