#include "sort.h"

/**
 * shell_sort - a function that sorts an array of integers in ascending order using the 
 *              Shell sort algorithm, using the Knuth sequence.
 * @array: array to sort.
 * @size: size of the array.
*/
void shell_sort(int *array, size_t size)
{
    int temp, j;
    int interval = 1;

    while (interval <= size / 3)
    {
        interval = interval * 3 + 1;
    }

    while (interval > 0)
    {
        if (size_t i = interval; i < size; i++)
        {
            temp = array[i];
            j = i;

            while (j >= interval && array[j - interval] > temp)
            {
                array[j] = array[j - interval];
                j -= interval;
            }

            array[j] = temp;
        }

        interval = (interval - 1) / 3;
    }
    print_array(array, size);
}
