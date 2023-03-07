#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - fills a block of memory with a particular value.
 * @b: constant value to be set
 * @s: pointer to the block of memory to be filled
 * @n: number of bytes to be set with constant byte 'b'
 * Return: a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
