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
		putchar("%d", x);
		x++;
	}
	putchar("\n");

	return (0);
}
