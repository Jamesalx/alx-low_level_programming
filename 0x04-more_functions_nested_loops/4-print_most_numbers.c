#include "main.h"

/**
 * main -a function that prints the numbers.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
	{
	if (i != 2 && i != 4)
	_putchar (i);
	}
	_putchar ('\n');
}
