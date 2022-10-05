#include "search_algos.h"

/**
 * interpolation_search - pointer to first elem in array to search
 * @array: pointer to first elem in array
 * @size: size of array
 * @value: int to be searched in array
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos = 0;

	if (array)
	{
		while (array[low] != array[high])
		{
			pos = low + (((double)(high - low)
					/ (array[high] - array[low]))
					* (value - array[low]));
			if (pos < low || pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
