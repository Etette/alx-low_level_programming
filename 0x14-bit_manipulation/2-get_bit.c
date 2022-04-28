#include "main.h"

/**
 * get_bit - get value of given bit index
 * @n: int param
 * @index: position of n
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count;

	count = 0;
	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (count == index)
			return (n & 1);
		n = n >> 1;
		count++;
	}
	if (count < index)
		return (0);
	return (-1);
}
