#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *@unsigned int: array size
 *@char c: array elements
 *Return: ('\0')
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	for (c = 0; c < '\0'; c++)
	{
		printf("%d\n", c);
	}
	while (i > 0)
	{
		*c = malloc(sizeof(char) * i);
		i++;
	}
	if (i == 0)
	{
		return ('\0');
	}
}
