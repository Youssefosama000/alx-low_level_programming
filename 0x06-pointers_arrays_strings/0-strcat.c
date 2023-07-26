#include "main.h"

/**
 * _strcat - a c program
 *
 * @dest: a parameter
 * @src: a parameter
 *
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; src[i]; i++)
		dest[c++] = src[i];

	dest[c++] = '\0';
	return (dest);
}
