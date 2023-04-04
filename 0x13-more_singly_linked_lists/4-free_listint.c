#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a list
 *@head:pointer to the first node of the linked list
 *
 *Return:(void);
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
		{
		temp = head;
		head = head->next;
		free(temp);
		}
}
