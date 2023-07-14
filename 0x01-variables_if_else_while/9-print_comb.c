#include <stdio.h>

/**
 * main - entry point
 * Description: a c program
 *
 * Return: 0
**/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
