#include <unistd.h>


/**
 * main-Write a program that prints _putchar, followed by a new line.
 *
 *
 *Return: (0) success
 *
 */

void putchar(_putchar);

int main(void)
{
	char ch = '_putchar';

	putchar(ch, '\n');

	return (0);
}
