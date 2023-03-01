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
	src = "New";
	dest = "World";
	char temp[100];

	strcpy(temp, "New");
	strcat(temp, "World");
	printf("%s\n", temp);

	return (dest);
}
