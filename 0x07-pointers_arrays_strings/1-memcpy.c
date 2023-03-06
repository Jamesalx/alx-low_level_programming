#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy() function copies n bytes from memory area src to memory area dest
 * @src:pointer to the source of data to be copied
 * @dest:pointer to the destination array where the content is to be copied
 * @n: This is the number of bytes to be copied.
 * Return:pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *src[] = "SuperHuman"
	char *dest;
	unsigned int n = 12;

	memcpy(dest, src, sizeof(char) * 12);
	{
		printf("dest: %s\n", dest);
	}
	return (dest);
}
