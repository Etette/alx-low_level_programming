#include "main.h"

/**
 * print_chessboard - functio that prints the chessboard
 * @a: array of inputs
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int k = 0, l;

	for (; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[k][l]);
		_putchar('\n');
	}
}
