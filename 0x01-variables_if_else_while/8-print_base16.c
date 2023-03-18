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
	char k;

	for (k = 97; k < 103; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);

}
