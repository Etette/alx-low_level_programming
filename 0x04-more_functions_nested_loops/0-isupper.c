#include "main.h"

/**
 * _isupper - check if c is uppercase
 * @c: int representing a character
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
