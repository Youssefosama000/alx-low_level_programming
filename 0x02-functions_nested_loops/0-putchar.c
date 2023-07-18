#include "main.h"

/**
 * main - entry point
 *
 * Description: a c program
 *
 * Return: o success
**/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i <= 8 ; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
