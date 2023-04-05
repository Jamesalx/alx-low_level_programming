#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *@now: pointer to the list_t list to print
 *@list_t: linked list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *now = h;

	while (now != NULL)
	{
		printf("%d\n", now->print_list);
		count++;
		now = now->next;
	}
	return (count);
}
