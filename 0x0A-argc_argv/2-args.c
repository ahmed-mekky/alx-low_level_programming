#include <stdio.h>

/**
 * main - print commands
 *
 * @argc: int
 * @argv: string
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	putchar('\n');
	return (0);
}
