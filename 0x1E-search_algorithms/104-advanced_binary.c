#include "search_algos.h"

int binary_search_v3(int *array, int value, size_t start, size_t end);
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
 * binary_search_v3 - searches for a value in array of int
 * @array: pointer to first elem in array
 * @start: start index
 * @end: end index
 * @value: value to search for in array
 * Return: first index wheere  value is located
 */
int binary_search_v3(int *array, int value, size_t start, size_t end)
{
	size_t mid = 0;

	if (!array)
		return (-1);

	if (start < end)
	{
		mid = (start + end) / 2;
		printArray(array, start, end);
		if (value == array[mid] && (array[mid - 1] != value))
		{
			return (mid);
		}
		else if (value <= array[mid])
			return (binary_search_v3(array, value, start, mid));
		else if (value > array[mid])
			return(binary_search_v3(array, value, mid + 1, end));
	}
	printArray(array, start, end);
	if (value == array[end])
		return (end);
	return (-1);
}

/**
 * advanced_binary - searches for value in an array of ints
 * @array: pointer to first elem in array
 * @size: size of array
 * @value: int to be searched in array
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array && size > 0)
		return (binary_search_v3(array, value, 0, size - 1));
	return (-1);
}
