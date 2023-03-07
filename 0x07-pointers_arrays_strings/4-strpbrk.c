#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function locates the first occurrence in the string 's'
 * of any of the bytes in the string 'accept'
 *@s: the string to be scanned
 *@accept:string containing the characters to match
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			return (s + a);
		}
	}
return ('\0');
}
