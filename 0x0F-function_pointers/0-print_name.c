#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: callback function to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}
