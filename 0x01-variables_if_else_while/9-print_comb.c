#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-a program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
	putchar(d);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
