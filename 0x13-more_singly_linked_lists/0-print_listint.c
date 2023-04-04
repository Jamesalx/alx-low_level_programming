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
	*h = head;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	printf("%d\n", count);
	return (count);
}
