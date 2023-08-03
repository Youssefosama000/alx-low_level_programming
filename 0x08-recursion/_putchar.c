#include <unistd.h>

/**
 * _putchar - a c program
 * @c: parameter
 * Return: characters
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
