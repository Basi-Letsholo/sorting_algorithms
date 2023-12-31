#include "sort.h"

/**
 * partition - sorts partition of list
 * @array: array of list
 * @size: length of list
 * @left: starting index
 * @right: ending index
 * Return: pivot index
 */
int partition(int *array, size_t size, int left, int right)
{
	int *temp, i, j;
	int tmp;

	temp = array + right;
	for (i = j = left; j < right; j++)
	{
		if (array[j] < *temp)
		{
			if (i < j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		i++;
		}
	}

	if (array[i] > *temp)
	{
		tmp = array[i];
		array[i] = array[right];
		array[right] = tmp;
		print_array(array, size);
	}

	return (i);
}

/**
 * lomuto_sort - implements lomuto partition
 * @array: array of list
 * @size: length of list
 * @left: starting index
 * @right: ending index
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int pivot;

	if (right - left > 0)
	{
		pivot = partition(array, size, left, right);
		lomuto_sort(array, size, left, pivot - 1);
		lomuto_sort(array, size, pivot + 1, right);
	}
}

/**
 * quick_sort - sorts list using quick sort algorithm
 * @array: array of list
 * @size: length of list
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}

	lomuto_sort(array, size, 0, size - 1);
}
