#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - print everything
 * @format: format of data type to be printed
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap,  int));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str != NULL)
					{
						printf("%s", str);
						break;
					}
			}
			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
				printf(", ");
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
