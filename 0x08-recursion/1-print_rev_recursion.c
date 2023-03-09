#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *@s: string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
	else
	return(0);
}
