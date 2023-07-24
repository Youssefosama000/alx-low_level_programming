#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * @s: string parameter input
 *
 * Return: the length of the string
**/

int _strlen(char *s)
{
	int counter;

	for (counter = 0 ; *s != '\0' ; s++)
		++counter;
	return (counter);
}
