#include "main.h"
#include <stdio.h>

/**
 * main -take a pointer to an int as parameter and updates the value to 98.
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)

{
	int n = 98;
	int  *ip; 
	ip = &n;
	
	_putchar ("Value of *ip variable: %d\n", *ip);

	return 0;
}
