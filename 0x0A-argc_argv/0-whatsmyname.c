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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
