#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @x: the number to be computed
 *
 * Return: the absolute value of number or zero
 */

int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
