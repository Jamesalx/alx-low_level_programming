#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - to compare two strings
*@s1:string to compare
*@s2:string to compare
* Return: s1[i] -i s2[i]
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
