#include "main.h"

/**
 * main -function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int j;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
			{
			_putchar(j);
			}
	_putchar('\n');
	}
}
