#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the multiplication of tow numbers followed by a new line
* @argc: the number of arguments supplied to the program
* @argv: an array of the arguments supplied to the program
*
* Return: if program receives two arguments - 0.
*         if program does not receve two arguments - 1.
*/

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%i\n", mul);

	return (0);
}
