#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - function that checks for a digit (0 through 9)
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return(1);
	else
		return (0);	
}
