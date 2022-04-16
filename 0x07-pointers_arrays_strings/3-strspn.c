#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be looped
 * @accept: bytes to be accepted
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int i, charFound;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			charFound = 0;
			if (*s == accept[i])
			{
				result++;
				charFound = 1;
				break;
			}
		}
		if (!charFound)
			break;
		s++;
	}
	return (result);
}
