#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers  -prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (; i < n; i++)
	{
		printf("%i%s", va_arg(ap, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(ap);
	printf("\n");
}
