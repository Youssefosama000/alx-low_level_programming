#include "main.h"

/**
 * _isdigit - check if the input is a number
 *
 * @c: the input
 *
 * Return: 1 for numbers and 0 for anything else
**/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
