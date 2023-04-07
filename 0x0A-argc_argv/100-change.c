#include <stdio.h>
#include <stdlib.h>

/**
* main - calculate the minimum number of coins to make change,
*        followed by a new line
* @argc: the number of arguments supplied to the program
* @argv: an array of the arguments supplied to the program
*
* Return: if program receives one argument - 0.
*         Otherwise - 1.
 */

int main(int argc, char *argv[])
{
	int change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		coins++;
		if ((change - 25) > 0)
		{
			change -= 25;
			continue;
		}
		if ((change - 10) >= 0)
		{
			change -= 10;
			continue;
		}
		if ((change - 5) >= 0)
		{
			change -= 5;
			continue;
		}
		if ((change - 2) >= 0)
		{
			change -= 2;
			continue;
		}
		change--;
	}

	printf("%d\n", coins);

	return (0);
}
