#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	src[10] = "123456789\0"
	char dest[15];
	
	strcpy(dest, src);
	putchar("dest: %s\n", dest);
	return (0);	
}
