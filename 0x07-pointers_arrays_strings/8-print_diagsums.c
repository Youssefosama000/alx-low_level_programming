#include "main.h"
#include <stdio.h>

/**
 * _print_diagsums - entry point
 * @a: parameter 1 (square matrix represented as a 1D array)
 * @size: parameter 2 (size of the square matrix)
 * Return: nothing
**/

void _print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < size * size - 1; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}

