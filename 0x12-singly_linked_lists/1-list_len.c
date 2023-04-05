#include "lists.h"
#include  <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *list_len - returns the number of elements in a linked list.
 *@h:head node;
 *
 *Return: (0);
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	*h = head;
	
	while (h != NULL)
	{
		count++;
		h->next;
	}
	return (count);
}
