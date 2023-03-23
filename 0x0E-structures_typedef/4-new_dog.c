#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog.
 *@name: first member
 *@age: second member
 *@owner: third member
 *Return: NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenD;
	struct dog *n_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;
	lenD = 0;
	while (owner[lenD] != '\0')
		lenD++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(lenN + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	n_dog->name = malloc(lenD + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= lenN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= lenD; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
	}
}
