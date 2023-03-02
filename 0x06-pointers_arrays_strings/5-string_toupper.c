#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* toupper -  function changes all lowercase letters of a string to uppercase
*@strlen:calculates the length of a given string
*
* Return: Always 0.
*/

char *string_toupper(char *)
{
	char s[] = "look me up"
	int length = strlen(s);

	for (int i = 0; i < length; i++)
	s[i] = toupper(s[i]);
        printf("%s\n", s);
	
	return (0);
}
