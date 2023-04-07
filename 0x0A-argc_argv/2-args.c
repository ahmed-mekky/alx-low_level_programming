#include <stdio.h>

/**
* main - print all the arguments passed to the program followed by a new line
* @argc: the number of arguments supplied to the program
* @argv: an array of the arguments supplied to the program
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
