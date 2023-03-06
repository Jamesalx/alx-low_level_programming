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
	char haystack[25] = "Pineapple";
	char needle[20] = "apple";
	char ret;

	ret = strstr(haystack, needle);

	printf ("substring is: %d\n", ret);
	return (0);
}
