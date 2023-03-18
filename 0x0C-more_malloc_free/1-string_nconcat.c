#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **string_nconcat - function that concatenates two strings.
 *@*s:pointer to a newly allocated space in memory
 *@S1: first string
 *@S2: second string
 *@n: size of string
 *Return: (NULL)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int S1_length = strlen(s1);
	int S2_length = strlen(s2);
	int j = S1_length + S2_length + 1;

	char *s = calloc(j,sizeof(char));
	{
	for (n = 0; n < j;ni++);
		(s[n] = s1[n]);
	for (n = 0; n < S2_length; n++)
		(s[S1_length + 1] = s2[n]);
	}
	return (NULL);
}
