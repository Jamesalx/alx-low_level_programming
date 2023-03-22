#include <stdio.h>
#include "function_pointers.h"
{
	char *name;
}
/*print_name - function to print a name
 *
 *Return: (0);
 */
void print_name(char *name, void (*f)(char *))
{
	char i;

	while (name[i])
	{
		_putchar(name != '\0');
			i++;
	}
	_putchar("%s\n", name);
	return (0);
}
