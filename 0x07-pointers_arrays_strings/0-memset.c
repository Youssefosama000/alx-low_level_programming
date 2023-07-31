#include "main.h"

/**
 * _memset - a c program
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: character s
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		s[x] = b;
	}
	return (s);
}
