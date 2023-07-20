#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: the size of triangle
**/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = size - x ; y > 1 ; y--)
				_putchar('#');
			for (z = 0 ; z <= x ; z++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
