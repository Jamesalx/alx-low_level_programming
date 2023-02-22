#include "main.h"
/**
 * main-function that checks for lowercase character.
 *_islower shows 1 if the input is a lowercase character
 *shows 0 if other character
 *Returns 1 if c is lowercase.Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
