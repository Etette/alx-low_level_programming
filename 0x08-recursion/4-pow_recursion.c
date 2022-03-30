#include "main.h"

/**
 * _pow_recursion - outputs x raised to y power
 * @x: int param
 * @y: int param
 * Return: x**y
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
