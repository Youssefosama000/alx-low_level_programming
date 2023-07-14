#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c program
 *
 * Return: always 0 (Success)
**/

int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar("\n");
	return (0);
}
