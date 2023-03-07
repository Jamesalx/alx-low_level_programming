#include "main.h"
#include <stdio.h>
 #include <string.h>

/**
 *_strchr - a function that locates a character in a string
 *@s:string to be scanned
 *@c:character to be located in the string
 * Return: a pointer to character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= c; j++)
	{
		if (c == s[j])
		{
		s += j;
		return (s);
		}
	}
	return ('\0');
}
