#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: name to print
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
