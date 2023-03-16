#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - a function that allocates memory using malloc
 *@b: to be allocated memory
 *
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	int i, n;

	ptr = (unsigned int *)malloc(sizeof(unsigned int));
	if (ptr == NULL)
	{
		return (0);
	}
	else
		{
		for (i = 0; i < n; ++i)
			{
			 ptr[i] = i + 1;
			}
		for (i = 0; i < n; ++i)
			{
			printf("%d, ", ptr[i]);
			}
	}
	free(ptr);
}
