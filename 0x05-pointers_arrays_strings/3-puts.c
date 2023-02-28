#include "main.h"
#include <stdio.h>

/**
 * _puts- a function that prints a string
 * followed by a new line, to stdout
 *@str: The string to print
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
