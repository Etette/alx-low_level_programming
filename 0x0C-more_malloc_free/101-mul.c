#include "main.h"
#include <stdlib.h>

/**
 * onlyNumbers - detrmines if string contains numbers
 * @c: input string
 * Retturn: NULL is false
 */
int onlyNumbers(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}

/**
 * _strlen - returns length of string
 * @s: string literal
 * Return: string legnth
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * _memset - fill memory with bytes
 * @s: memory param
 * @b: constant byte
 * @n: bytes of memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}

/**
 * _calloc - allocates memory to array
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	_memset(p, 0, size * nmemb);
	return (p);
}

/**
 * multiply - multiply two numbers and display it
 * @f: first number
 * @s: second number
 */

void multiply(char *f, char *s)
{
	int len1, len2, total, fdig, sdig, res = 0, tmp;
	int i;
	int *p;

	len1 = _strlen(f);
	len2 = _strlen(s);
	tmp = len2;
	total = len1 + len2;
	p = _calloc(sizeof(int), (len1 + len2));
	for (len1--; len1 >= 0; len1--)
	{
		fdig = f[len1] - '0';
		res = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			sdig = s[len2] - '0';
			res += p[len2 + len1 + 1] + (fdig * sdig);
			p[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			p[len1 + len2 + 1] = res % 10;
	}
	while (*p == 0)
	{
		p++;
		total--;
	}
	for (i = 0; i < total; i++)
		_putchar(p[i]);
	_putchar('\n');
}

/**
 * main - multiply two psitive integers
 * @argc: count param
 * @argv: vector param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *f = argv[1];
	char *s = argv[2];
	char E[] = {'E', 'r', 'r', 'o', 'r', '\n'};
	int i;

	if (argc != 3 || !onlyNumbers(f) || !onlyNumbers(s))
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	if (*f == 48 || *s == 48)
		_putchar('\0');
	else
		multiply(s, f);
	return (0);
}
