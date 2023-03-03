#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*function changes all lowercase letters of a string to uppercase
*strlen:calculates the length of a given string
*@n: pointer
* Return:n
*/

char *string_toupper(char n*);
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
