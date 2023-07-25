#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    int array2[] = {8, 6, 3, 2, 6, 1};
    size_t n = sizeof(array) / sizeof(array[0]);
    size_t n2 = 6;

    print_array(array, n);
    printf("\n");
    counting_sort(array, n);
    printf("\n");
    print_array(array, n);

    printf("--\n");

    print_array(array2, n2);
    printf("\n");
    counting_sort(array2, n2);
    printf("\n");
    print_array(array2, n2);

    return (0);
}
