#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments in the command line
 * @argv: an array that contains values passed as arguments
 * Return: Always success (0);
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void)argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
