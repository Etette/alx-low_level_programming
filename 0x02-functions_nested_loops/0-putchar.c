#include "main.h"

/**
 * main - print _putchar followed by a new line
 *
 * Return: 0 if success
 */

int main(void)
{
	char escena[] = "_putchar\n";
	int i = 0;

	while (escena[i])
	{
		_putchar(escena[i]);
		i++;
	}

	return (0);
}
