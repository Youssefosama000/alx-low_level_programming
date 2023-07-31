#include "main.h"

/**
 * _strchr - a c program
 * @s: parameter 1
 * @c: parameter 2
 * Return: alwyas 0
**/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0 ; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
