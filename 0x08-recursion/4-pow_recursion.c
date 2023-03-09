#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y
 *@x: The number to be raised.
 *@y: The power 'x' is raised to.
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else(y >= 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
