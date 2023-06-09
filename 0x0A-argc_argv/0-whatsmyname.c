#include <stdio.h>
#include "main.h"

/**
 * main - print file name
 *
 * @argc: number of commands
 * @argv: array of commands
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; argv[argc - 1][i] != '\n'; i++)
	{
		_putchar(argv[argc - 1][i]);
	}
	_putchar('\n');
	return (0);
}
