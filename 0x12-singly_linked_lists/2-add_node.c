#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - singly linked list
 * @str: string - (malloc'ed string)
 * @head: pointer to head node
 * Return: new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nh_node;
	char *n_str;

	nh_node = malloc(sizeof(list_t));
	if (nh_node == NULL)
	{
		return (NULL);
	}
	n_str = strdup(str);
	if (n_str == NULL)
	{
		free(nh_node);
		return (NULL);
	}
	nh_node->str = n_str;
	nh_node->next = *head;
	*head = nh_node;

	return (*head);
}
