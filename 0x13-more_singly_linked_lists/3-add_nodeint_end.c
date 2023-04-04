#include  "lists.h"
#include "stdlib.h"
/**
 *add_nodeint_end - adds a node at the end of the list
 * @head: A pointer to the head of the listint_t list.
 * @n: The integer to be added to the listint_t list.
 *
 *Return: If successful - a pointer to the new node. Otherwise, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	temp = *head;
	while (temp->next = NULL)
	temp = temp->next;

	temp->next = end_node;
	return (end_node);
}
