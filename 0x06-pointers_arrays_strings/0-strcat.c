#include "main.h"

/**
 * _strcat - a c program
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 *
 * Return: dest
**/

char *_strcat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c++] = src[i];

	dest[c++] = '\0';
	return (dest);
}
