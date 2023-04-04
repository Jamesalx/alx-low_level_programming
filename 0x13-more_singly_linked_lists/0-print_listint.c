#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_listint - function that prints all elements of a list
 *@h - head of linked list node
 *@next - next node 
 *Return: The number(count) of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		count++;
	}
	return(count);
}
