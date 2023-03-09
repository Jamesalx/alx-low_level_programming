#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: number to calculate the square root of
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 *_sqrt_recursion - recurses to find the natural square root of a number
 *@n: number to calculate the square root of
 *@i: iterator
 * Return: resulting square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}