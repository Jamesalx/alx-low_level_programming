#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 *@nmemb - number of elements
 *@size: byte size of the elements
 *
 * Return:
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	*_calloc = (*unsigned int)malloc(size * sizeof(unsigned int));
}
