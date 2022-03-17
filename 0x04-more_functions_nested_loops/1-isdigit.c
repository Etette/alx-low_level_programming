#include "main.h"

/**
 * _isdigit - check if parameter is a digit
 * @c: int representing an ascii character
 * Return: return 1 if it is a digit else return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
