#include "main.h"
#include <stdio.h>

/**
 * main - function that swaps the values of two integers
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	_putchar("Enter Value of a ");
	scanf("%d", &a);
	_putchar("\nEnter Value of b ");
	scanf("%d", &b);
	swap_int(&a, &b);
	_putchar("\nAfter Swapping: a = %d, b = %d", a, b);
	return 0;
}
