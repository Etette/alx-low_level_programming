#include "main.h"

/**
 * string_toupper - change string to upperCase
 * @s: pointer to char param
 * Return: *s
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
	}
	return (s);
}
