#include "main.h"

/**
 * powX - raises b to power p
 * @b: base param
 * @p: power param
 * Return: b raised to power p
 */

int powX(int b, int p)
{
	int prd = 1;

	while (p > 0)
	{
		prd *= b;
		p--;
	}
	return (prd);
}

/**
 * _strlen - length of a string
 * @s: string param
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}


/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int power = _strlen(b) - 1;
	int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			num += powX(2, power);

		b++;
		power--;
	}
	return (num);
}

