#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c program
 *
 * Return: 0
**/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
