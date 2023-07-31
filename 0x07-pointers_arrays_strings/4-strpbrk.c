#include "main.h"

/**
 * _strpbrk - entry point
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0 always
**/

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i)
		}
	}
	return (0);
}
