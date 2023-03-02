#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strncpy - function that copies a string.
 *@dest: pointer to the destination array where the content is to be copied.
 *@src: string to be copied
 *@int n: number of characters to be copied from source
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char src[50];
	char dest[50];
	int n;

	strncpy(dest, src, n);
	printf("%s\n", dest)
	
	return (dest);
}
