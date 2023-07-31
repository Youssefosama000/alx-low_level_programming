#include "main.h"

/**
 * _strchr - a c program
 * @s: parameter 1
 * @c: parameter 2
 * Return: always 0
**/

char *_strchr(char *s, char c)
{
	int x;

	for (; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
