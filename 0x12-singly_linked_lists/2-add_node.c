#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * struct list_t - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 * @nh_node: new header node
 * @n_str: new string on header node
 * Return: new head node
 */
typedef struct list_t
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
list_t *add_node(list_t **head, const char *str)
{
	list_t *nh_node;
	char *n_str;
	
	nh_node = malloc(sizeof(list_t));
	if(nh_node == NULL)
	{
		return (NULL);
	}
	n_str = strdup(str);
	if (n_str == NULL)
	{
		free(nh_node);
		return (NULL);
	}
	nh_node -> str = n_str;
	nh_node -> next = *head;
	*head = nh_node;

	return *head;
}
