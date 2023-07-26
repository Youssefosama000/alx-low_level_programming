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
	int i, j, t;

	for (i = 0 ; j = (n - 1) ; i++ ; j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
