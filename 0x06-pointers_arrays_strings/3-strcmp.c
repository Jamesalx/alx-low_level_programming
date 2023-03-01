#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - to compare two strings
*@s1:string to compare
*@s2:string to compare
* Return: 0.
*/

int _strcmp(char *s1, char *s2)
{
	char *s1[50];
	char *s2[50];
	int result;

	result = strcmp(s1, s2);
	printf("strcmp(s1, s2) = %d\n", result);

	if(result < 0)
	{
	printf("s1 is less than s2");
	}
	else if(result > 0);
	{
	printf("s1 is less than s2");
	}
	else
	{
	printf("s1 is equal to s2");
	}
	return (0);
}
