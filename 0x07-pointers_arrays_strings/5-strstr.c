#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function that locates a substring
 *@haystack: string to be scanned.
 *@needle:the small string to be searched with-in haystack string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (;  *haystack != '\0'; haystack++)
	{
	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
		one++;
		two++;
	}
	if (*two == '\0')
	return (haystack);
	}
	return ('\0');
}
