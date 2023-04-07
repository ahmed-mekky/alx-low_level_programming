#include <stdio.h>

/**
* main - prints the number of arguments supplied followed by a new line
* @argc: the number of arguments supplied to the program
* @argv: an array of the arguments supplied to the program
*
* Return: Always 0.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
