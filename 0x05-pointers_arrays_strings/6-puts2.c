#include "main.h"
#include <stdio.h>

/**
 * main -function that prints every other character of a string
 * starting with the first character
 * followed by a new line.
 *
 * Return: Always 0.
 */

void puts2(char *str);
{
	char str = "Hello world";	
	
	for (i = 0;i < strlen(str); i += 2);
	{
		putchar(str[i]);
	}
	return (0);
}
