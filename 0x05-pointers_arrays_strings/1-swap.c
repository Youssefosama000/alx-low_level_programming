#include "main.h"

/**
 * swap_int - to swape to values
 *
 * @a: first paramter
 * @b:second paramter
 *
 * Return: nothing
**/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	temp = *b;
}
