#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: list
 * Return: 0
**/

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
