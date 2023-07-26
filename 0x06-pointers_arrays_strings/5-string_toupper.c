#include "main.h"

/**
 * string_toupper - to change lower case
 * @str: the string
 * Return: the string
**/

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}
	return (str);
}
