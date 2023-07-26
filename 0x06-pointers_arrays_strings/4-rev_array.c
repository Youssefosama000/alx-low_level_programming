#include "main.h"

/**
 * reverse_array - to reverse an array
 *
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: void
**/

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1 ; index >= n / 2 ; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
