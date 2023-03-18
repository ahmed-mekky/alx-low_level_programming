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
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('$');
	return (0);
}
