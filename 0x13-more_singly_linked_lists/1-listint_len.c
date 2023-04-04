#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *listint_len - function that returns the number of elements in a linked list.
 *@h: pointer of a head node
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
