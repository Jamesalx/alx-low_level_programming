#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name,
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: On success (0);
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s", i, argv[i]);
	}
	return (0);
}
