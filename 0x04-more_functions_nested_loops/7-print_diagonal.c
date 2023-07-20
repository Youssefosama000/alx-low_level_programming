#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: the number of times the / character
 * should be printed
**/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1 ; x < n ; x++)
		{
			for (y = 1 ; y < x ; y++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
