#include "main.h"

/**
 * print_square - print a square
 *
 * @size: the number of squares
 *
 * return: empty
**/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
