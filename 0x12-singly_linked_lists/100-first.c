#include <stdio.h>

void theHare(void)__attribute__((constructor));

/**
 * theHare - prints given string
 */

void theHare(void)
{
	printf("You're beat and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
