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
	char dup;
	int n;

	for(n = 0; n != '\0'; n++);
		{
			printf("%d\n", n);
		}
	str = malloc(sizeof(char) * n);
	{
		printf("%s\n", str);
		free(str);
	}
	dup = _strdup(str);
	{
		printf("%s\n", dup);
	}
	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		return (dup);
	}
}
