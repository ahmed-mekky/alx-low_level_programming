#include <stdio.h>
/**
* main - Entry point
*
* Description: A C program that prints with put function
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	int k;

	for (k = 0; k < 6; k++)
	{
		putchar('a' + k);
	}
	putchar('\n');
	return (0);

}
