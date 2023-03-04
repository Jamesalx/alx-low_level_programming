#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - appends 'n' number of characters from one string
 * to the end of another string
 * @dest:pointer to the destination array
 * @src:the string to be appended
 * @n:maximum number of characters to be appended
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
