#include "main.h"

/**
 * main- function that prints the last digit of a number
 *
 * returns: 0 Always
 */

int print_last_digit(int n)
{
	int w;

	w = n % 7;
	if (w < 0)
	{
		 _putchar(-w + 48);
		 return (-w);
	}
	else
	{
		 _putchar(w + 48);
	}
	return (w);
}
