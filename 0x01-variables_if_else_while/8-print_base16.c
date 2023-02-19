#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-a program that prints the lowercase alphabet in reverse
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int d;
	char low;

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
