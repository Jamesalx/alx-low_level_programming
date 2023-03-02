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
	char test[100];

	strcpy(test, "*dest");
	strcat(test, "*src");
	printf("%s\n", test);

	return (dest);
}
