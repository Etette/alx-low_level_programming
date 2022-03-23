#include "main.h"

/**
 * cap_string - capitalize each word in a string
 * @s: pointer to char param
 * Return: (s)
 */

char *cap_string(char *s)
{
	int i, j;

	char arr[] = ", \t\n.;?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (s[i] == arr[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
	}
	return (s);
}
