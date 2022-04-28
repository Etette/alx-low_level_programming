#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: pointer to int param
 * @index: position of n
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int revnum;
	unsigned long int num;
	unsigned long int count;
	unsigned long int oldnum;

	revnum = count = num = 0;
	oldnum = *n;

	if (index > 63)
		return (-1);
	while (count < 63)
	{
		revnum = revnum << 1;
		if (count == index)
			revnum += 0;
		else
			revnum += oldnum & 1;
		count++;
		oldnum = oldnum >> 1;
	}
	while (count > 0)
	{
		num = num << 1;
		num += revnum & 1;
		revnum = revnum >> 1;
		count--;
	}
	*n = num;
	return (1);
}
