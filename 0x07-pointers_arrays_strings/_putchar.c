#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: parameter
 * Return: 1 for success
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
