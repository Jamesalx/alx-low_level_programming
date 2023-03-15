#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *@size: number of bytes allocated
 *@c: array elements
 *Return:a pointer to the array, or (NULL) if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;
	return (arr);
}
