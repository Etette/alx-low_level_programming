#include "main.h"

/**
 * get_endianness - gets the endianness of a machine
 *
 * Return: 1 if LE, 0 if BE
 */

int get_endianness(void)
{
	int x;
	char *y;

	y = (char *)&x;
	return (*y + 48);
}
