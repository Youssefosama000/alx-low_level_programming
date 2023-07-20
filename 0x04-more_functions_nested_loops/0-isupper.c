#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: the input
 *
 * Return: 1 for upper and 0 for anything else
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
