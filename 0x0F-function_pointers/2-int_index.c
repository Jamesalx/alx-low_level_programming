#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 *@array: is the  array to search in.
 *@size:number of elements of the array
 *@cmp: is a pointer to the function to be used to compare values
 *@int_index: returns the index of the first element
 *Return: (-1); if size <= 0 || If no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0));
				return (i);
		}
	}
return (-1);
}
