#include "main.h"

/**
 * _memcpy - a c program
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}
