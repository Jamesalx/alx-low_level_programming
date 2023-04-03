#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Return: [0] (nil)
 * Description: singly linked list node structure
 */
typedef struct list_t
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	typedef struct list_t {
		char *str;
		struct list_t *next;
	}list_t;

	size_t print_list(const list_t *h){
		size_t count = 0;
		while(h != NULL)
		{
			printf("%s\n", h -> str);
			h = h -> next;
			count++;
		}
	}
	return count;
}
