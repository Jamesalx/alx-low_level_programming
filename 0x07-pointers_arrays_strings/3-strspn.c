#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn -  function that gets the length of a prefix substring
 *@s:the string to be scanned
 *@accept: string containing the list of characters to match in 's'
 * Return: Returns the number of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
		b = 0;

	while (s[b] != 32)
	{
		if (accept[a] == s[b])
		{
			c++;
		}
		b++;
	}
	a++;
	}
	return (c);
}
