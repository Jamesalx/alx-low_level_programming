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
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
