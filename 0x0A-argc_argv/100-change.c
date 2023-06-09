#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc the change
 * @argc: int
 * @argv: string
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n ");
		return (1);
	}
	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("0\n");
	}
	while (change > 0)
	{
		coins++;
		if (change >= 25)
		{
			change -= 25;
		}
		else if (change >= 10)
		{
			change -= 10;
		}
		else if (change >= 5)
		{
			change -= 5;
		}
		else if (change >= 2)
		{
			change -= 2;
		}
		else if (change >= 1)
		{
			change -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
