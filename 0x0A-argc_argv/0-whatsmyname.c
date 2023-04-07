#include <stdio.h>

/**
* main - prints the name of the program followed by a new line
* @argc: the number of arguments supplied to the program
* @argv: an array of the arguments supplied to the program
*
* Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
