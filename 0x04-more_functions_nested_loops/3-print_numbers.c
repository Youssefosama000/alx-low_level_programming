#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * only using _putchar twice
 *
 * return: always 0
**/

void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (x >= 0 && x <= 9);
	_putchar('\n');
}
