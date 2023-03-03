#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - to compare two strings
*@*s1:string to compare
*@*s2:string to compare
* Return: 0.
*/

int _strcmp(char *s1, char *s2)
{
	char *s1[20], *s2[20];
	int value;

	printf("string 1: %d\n", s1);
	printf("string 2: %d\n", s2);
	value = strcmp(*s1, *s2);
	if (value == 0)
	{
		printf("same");
	}
	else
		printf("not same");
	return (0);
}
