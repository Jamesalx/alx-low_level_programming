#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strncpy -function that copies a string.
 *@dest: pointer to the destination array where the content is to be copied.
 *@src: string to be copied
 *@n: number of characters to be copied from source
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g;

	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
