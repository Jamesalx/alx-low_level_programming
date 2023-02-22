#include "main.h"

/**
 * main-entry point
 * prints the alphabet 10 times in lowercase.
 *Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; j <= 10; j++)
	{
	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	}
}
