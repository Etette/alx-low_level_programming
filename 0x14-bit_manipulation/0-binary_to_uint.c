#include "main.h"

/**
 * powX - raises b to power p
 * @b: base param
 * @p: power param
 * Return: b raised to power p
 */

int powX(int b, int p)
{
	if (p < 0)
		return (-1);
	else if (p == 1)
		return (b);
	else if (p == 0)
		return (1);
	return (b * powX(b, p - 1));
}

/**
 * _strlen - length of a string
 * @s: string param
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
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
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			n += powX(2, (len - i - 1));
		else if (b[i] != '0')
			return (0);
	}
	return (n);
}

