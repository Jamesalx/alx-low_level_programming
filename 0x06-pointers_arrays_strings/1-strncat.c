#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - appends 'n' number of characters from one string
 * to the end of another string
 * @dest:pointer to the destination array
 * @src:the string to be appended
 * @n:maximum number of characters to be appended
 *
 * Return: (0)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}
