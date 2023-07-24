#include "main.h"

/**
 * *_strcpy - copy a string
 *
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: pointer to 'dest'
**/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];

	} while (src[i] != '\0');

	return (dest);
}
