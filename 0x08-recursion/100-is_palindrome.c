#include "main.h"

/**
 * is_palindrome - returns natural square of a number
 * @s: int para
 * Return: char type
 */

int is_palindrome(char *s)
{
	int curr, last;

	curr = 0;
	last = _strlen_recursion(s) - 1;
	return (palindrome(s, curr, last));
}

/**
 * palindrome - entry point
 * Desc: palindrome
 * @s: char param
 * @curr: int param
 * @last: int param
 * Return: recursion
 */

int palindrome(char *s, int curr, int last)
{
	if (curr > last)
	{
		return (1);
	}
	else if (s[curr] == s[last])
	{
		return (palindrome(s, curr + 1, last - 1));
	}
	else
		return (0);
}

/**
 * _strlen_recursion - entry point
 * Desc: _strlen_recursion
 * @s: char type
 * Return: function that returns the length od a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
