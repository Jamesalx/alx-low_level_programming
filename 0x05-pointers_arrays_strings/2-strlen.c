#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "Hello Strlen";
	len = strlen(str);
	_putchar("strlen(str): %d\n", len);
	
	return (0);
}
