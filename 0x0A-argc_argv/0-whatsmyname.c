#include "main.h"

/**
 * main - print file name
 *
 * @argc: number of commands
 * @argv: array of commands
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
