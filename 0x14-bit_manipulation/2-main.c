#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1, 0);
    printf("%d\n", n);
    n = get_bit(98, -3);
    printf("%d\n", n);
    n = get_bit(-1024, 15);
    printf("%d\n", n);
    return (0);
}
