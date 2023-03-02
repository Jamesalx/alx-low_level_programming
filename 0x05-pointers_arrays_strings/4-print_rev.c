#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - function that prints a string, in reverse
 *followed by a new line
 *@s: string to be printed.
 *Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
