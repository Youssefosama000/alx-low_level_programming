#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in reverse
 *
 * Return: 0
**/

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
