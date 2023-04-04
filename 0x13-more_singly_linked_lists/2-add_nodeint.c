#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *add_nodeint - a function adds a new node at the beginning of a list.
 *@head:double pointer head
 *@n: int data to be added
 *Return:address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p-> = n;
	p->next = *head;
	*head = p;

	return (p);
}
