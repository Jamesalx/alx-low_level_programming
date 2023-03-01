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
	char src[50] = "the source";
	char dest[50] = "the dest";
	char 2dest[50] = "second dest";

	strcat(dest, src);
	printf("%s\n", dest);
	printf("%s\n", 2dest);

	strncat(2dest, src, n);
	printf("%s\n", 2dest);

	return (0);
}
