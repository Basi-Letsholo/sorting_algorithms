#include "sort.h"

/**
 * counting_sort - sorts list in ascending order using counting sort algorithms
 * @array: array of list
 * @size: length of list
 */
void counting_sort(int *array, size_t size)
{
	int *array_count, max, j, k, n, index = 0;
	size_t i;

	if (size < 2)
	{
		return;
	}
	max = max_int(array, size);
	array_count = malloc(sizeof(int) * max + 1);
	if (array_count == NULL)
	{
		return;
	}
	for (j = 0; j <= max; j++)
	{
		array_count[j] = 0;
	}
	for (i = 0; i < size; i++)
	{
		for (j = array[i]; j <= max; j++)
		{
			array_count[j] += 1;
		}
	}
	print_array(array_count, max + 1);
	j = 0;
	while (j < max)
	{
		if (array_count[j + 1] > array_count[j])
		{
			n = array_count[j + 1] - array_count[j];
			for (k = 0; k < n; k++)
			{
				array[index] = j + 1;
				index++;
			}
		}
		j++;
	}
	free(array_count);
}

/**
 * max_int - finds max int in array list
 * @array: array of list
 * @size: length of array
 * Return: max int
 */
int max_int(int *array, size_t size)
{
	size_t i;
	int max;

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	return (max);
}
