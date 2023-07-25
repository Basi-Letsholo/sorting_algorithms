#include "sort.h"

/**
 * quick_sort - sorts a list in ascending order using quick sort algorithm
 * @array: contains list to sort
 * @size: length of list
 */
void quick_sort(int *array, size_t size)
{
	size_t n = 0;

	if (size < 2)
	{
		return;
	}

	n = partition(array, size);
	quick_sort(array, n);
	quick_sort(&array[n + 1], size - n - 1);

	print_array(array, size);
}

/**
 * partition - sorts each partition of list
 * @array: partitioned array
 * @size: size of array
 * Return: pivot index
 */
size_t partition(int *array, size_t size)
{
	int pivot, temp;
	size_t i, n = 0;

	pivot = array[size - 1];

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] < pivot)
		{
			temp = array[i];
			array[i] = array[n];
			array[n] = temp;
			n++;
		}
	}
	temp = array[n];
	array[n] = pivot;
	array[size - 1] = temp;

	return (n);
}
