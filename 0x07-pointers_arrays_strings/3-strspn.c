#include "main.h"

/**
 * _strspn - entry point
 * @s: parameter 1
 * @accept: parameter 2
 * Return: integer n
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	check = 0;

	for (n = 0; accept[n] != '\0'; n++)
	{
		if (accept[n] == s[i])
		{
			value++;
			check = 1;
			break;
		}
	}

	if (check == 0)
		break;
	}

	return (value);
}
