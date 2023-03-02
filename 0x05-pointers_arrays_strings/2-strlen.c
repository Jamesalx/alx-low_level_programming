#include "main.h"

/**
 *_strlen - calculates the length of a given string
 *@s: char to check
 *Return:0;
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
