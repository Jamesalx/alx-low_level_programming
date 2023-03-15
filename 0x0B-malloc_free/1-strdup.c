#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 *_strdup - function to duplicate a string.
 *It returns a pointer to null-terminated byte string.
 *@str: string pointer
 *@dup: new string
 *Return:('0\') || *dup
 */
char *_strdup(char *str)
{
	int *dup;
	int n;
	int q = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (n = 0)
	{
		(str[n] != '\0');
		n++;
	}
	dup = malloc(sizeof(char) * (n + 1));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (q = 0; str[q]; q++)
	{
		dup[q] = str[q];
	}
	return (dup);
}
