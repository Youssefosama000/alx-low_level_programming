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
	int x = 48;

	while (x <= 102)
	{
		if (x == 57)
			x += 39;
		x++;
	}
	putchar('\n');
	return (0);
}
