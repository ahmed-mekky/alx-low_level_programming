#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the addition of tow numbers followed by a new line
* @argc: the number of arguments supplied to the program
* @argv: an array of the arguments supplied to the program
*
* Return: if program receives only numbers - 0.
*         Otherwise - 1.
*/

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}
		sum = sum + atoi(argv[num]);
	}
	printf("%i\n", sum);

	return (0);
}
