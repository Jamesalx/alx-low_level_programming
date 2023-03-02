#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - pointer to the destination string
 *@src:the string to be appended
 *@dest: pointer to the destination array
 * Return: (dest);
 */

char *_strcat(char *dest, char *src)
{
	int d = 0, i;

	while (dest[d])
	{
		d++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		d = src[i];
		d++;
	}
	d = '\0';
	return (dest);
}
