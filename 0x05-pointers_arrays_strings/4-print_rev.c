#include "main.h"

/**
 * print_rev - print string in a reverse
 *
 * @s: parameter
 *
 * Return: nothing
**/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
