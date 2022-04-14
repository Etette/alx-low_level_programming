#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: char pointer
 * @n: int param
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (!ptr)
			ptr = "(nil)";
		if (!separator)
			printf("%s", ptr);
		else if (separator && !i)
			printf("%s", ptr);
		else
			printf("%s%s", separator, ptr);
	}
	printf("\n");
	va_end(ap);
}
