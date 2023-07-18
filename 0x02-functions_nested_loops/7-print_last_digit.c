#include "main.h"

/**
 * print_last_digit - get the last digit of a number
 *
 * @x: the number to be treated
 *
 * Return: value of the last digit number
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		y = y * -1;
	}
	_putchar(y + '0');
	return (y);
}
