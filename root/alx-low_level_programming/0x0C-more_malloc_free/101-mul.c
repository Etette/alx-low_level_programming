#include <stdlib.h>
#include "main.h"

/**
 * print_str - prints a string
 * @str: string to print
 */

void print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_err - prints the string ERROR
 */
void print_err(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * rev_string - Reverse a string
 * @s: the string to reverse
 * @size: size of string to reverse
 * Return: void
 */
void rev_string(char *s, int size)
{
	char *str;
	int i, r;

	str = malloc(size);
	if (str == NULL)
		print_err();
	i = 0;
	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}
	r = i - 1;
	i = 0;
	while (r > 0)
	{
		*(s + r) = str[i];
		r--;
		i++;
	}
	*(s + r) = str[i];
	free(str);
}

/**
 * str_len - find the length of a string
 * @str: string to find length
 * Return: length of string
 */

unsigned int str_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * init - initialize an array with 0
 * @arr: array param
 * @size: size of array
 * Return: pointer to array
 */

char *init(char *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		arr[i] = '0';
		i++;
	}
	return (arr);
}

/**
 * _isstrdigit - check if input  is only numbers
 * @str: given input to check
 *
 * Return: 1
 */

int _isstrdigit(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * mul - multiply two strings together
 * @num1: int param
 * @num2: int param
 * @len1: length of 1st string
 * @len2: len of 2nd string
 * Return: pointer to char array
 */
char *mul(char *num1, char *num2, int len1, int len2)
{
	int i, prod, j, carry, k, digit, reslen;
	char *res;

	reslen = len1 + len2 + 1;
	res = malloc(reslen * sizeof(char));
	if (res == NULL)
		print_err();
	res = init(res, reslen);
	i = len2 - 1;
	carry = k = digit = 0;
	while (i >= 0 && k < (len1 + len2))
	{
		j = len1 - 1;
		k = digit;
		while (j  > 0)
		{
			carry = 0;
			prod = (num1[j] - '0') * (num2[i] - '0');
			if (prod > 9)
				carry += prod / 10;
			prod = prod % 10;
			if (((res[k] - '0') + prod) > 9)
			{
				carry += 1;
				res[k] += (prod - 10);
			}
			else
				res[k] += prod;
			res[k + 1] += carry;
			k++;
			j--;
		}
		i--;
		digit++;
	}
	if (res[k] == '0')
		res[k] = '\0';
	else
		res[k + 1] = '\0';
	return (res);
}

/**
 * remove_zeroes - remove zeroes from num
 * @str: string param
 * @len: length of string
 * Return: pointer to new string
 */

char *remove_zeroes(char *str, int len)
{
	int i, j;
	char *nstr;

	i = 0;
	while (str[i] == '0' && str[i] != '\0')
	{
		i++;
	}
	if (len - i == 0)
	{
		nstr = malloc(2 * sizeof(*nstr));
		nstr[0] = '0';
		nstr[1] = '\0';
		return (nstr);
	}
	else
		len -= i;
	nstr = malloc(len * sizeof(*nstr) + 1);
	j = 0;
	while (j < len)
	{
		nstr[j] = str[i];
		j++;
		i++;
	}
	nstr[j] = '\0';
	return (nstr);
}
/**
 * check_zero - check if num is zero
 * @str: str to check
 * @len: len of string
 * Return: pointer
 */

char *check_zero(char *str, int len)
{
	char *num;
	int i;

	if (str[0] == '0' && len != 1)
		num = remove_zeroes(str, len);
	else if (str[0] == '0' && len == 1)
	{
		num = malloc(len + 1);
		if (num == NULL)
			print_err();
		num[0] = '0';
		num[1] = '\0';
	}
	else
	{
		num = malloc(len + 1);
		if (num == NULL)
			print_err();
		i = 0;
		while (i < len)
		{
			num[i] = str[i];
			i++;
		}
		num[i] = '\0';
	}
	return (num);
}

/**
 * main - multiply two strings
 * @argc: int param
 * @argv: value of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int len1, len2, anslen;
	char *ans, *num1, *num2;

	if (argc != 3)
	{
		print_err();
		exit(98);
	}
	if (_isstrdigit(argv[1]) == 0 || _isstrdigit(argv[2]) == 0)
	{
		print_err();
		exit(98);
	}
	len1 = str_len(argv[1]);
	len2 = str_len(argv[2]);
	num1 = check_zero(argv[1], len1);
	if (*num1 == '0')
	{
		_putchar('\0');
		_putchar('\n');
		return (0);
	}
	num2 = check_zero(argv[2], len2);
	if (*num2 == '0')
	{
		_putchar('\0');
		_putchar('\n');
		return (0);
	}
	len1 = str_len(num1);
	len2 = str_len(num2);
	if (len1 > len2)
		ans = mul(num1, num2, len1, len2);
	else
		ans = mul(num2, num1, len2, len1);
	anslen = str_len(ans);
	rev_string(ans, anslen);
	print_str(ans);
	free(ans);
	free(num1);
	free(num2);
	return (0);
}
