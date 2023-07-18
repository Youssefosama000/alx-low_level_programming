#include "main.h"

/**
 * main - entry point
 *
 * Description: a c program
 *
 * Return: 0 success
**/

void print_alphabet(void)
{
	char c;
	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
	return 0;
}
