#include "search_algos.h"

int binary_search_v2(int *array, int value, size_t start, size_t end);
void printArray(int *array, size_t start, size_t end);
/**
 * printArray - print array
 * @array: pointer to first elem of array
 * @start: index to start
 * @end: index to end
 *
 * Return: nothing
 */
void printArray(int *array, size_t start, size_t end)
{
	size_t j = 0;

	printf("Searching in array: ");
	for (j = start; j <= end; j++)
	{
		printf("%d", array[j]);
		if (j != end)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}

/**
 * binary_search_v2 - searches for a value in array of int
 * @array: pointer to first elem in array
 * @start: start index
 * @end: end index
 * @value: value to search for in array
 * Return: first index wheere  value is located
 */
int binary_search_v2(int *array, int value, size_t start, size_t end)
{
	size_t mid = 0;

	if (!array)
		return (-1);

	while (start < end)
	{
		printArray(array, start, end);
		mid = (start + end) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
	}
	printArray(array, start, end);
	if (value == array[end])
		return (end);
	return (-1);
}

/**
 * exponential_search - searches for value in a sorted array of ints exponentially
 * @array: pointer to first elem in array
 * @size: size of array
 * @value: int to be searched in array
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t tmp = 1, start = 0, end = size, save = 0;

	if (array && size > 0)
	{
		if (array[0] == value)
			return (0);
		while (tmp < end && array[tmp] <= value)
		{
			start = tmp;
			printf("Value checked array[%ld] = [%d]\n", start, array[tmp]);
			tmp *= 2;
		}
		save = tmp < end ? tmp : end - 1;
		printf("Value found between indexes [%ld] and [%ld]\n", start, save);
		if (array[start] == value)
			return (start);
		if (array[save] == value)
			return (save);
		return (binary_search_v2(array, value, start, save));
	}
	return (-1);
}
