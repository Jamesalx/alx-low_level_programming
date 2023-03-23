#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
		if (d == 0)
			return;
		{
			if (d->name == NULL)
			printf("Name:(nil)\n");
			else
				printf("Name: %s\n", d->name);

			printf("age: %f\n", d->age);
		if (d->owner == NULL)
		printf("owner: (nil)\n");
		else
		printf("owner: %s\n", d->owner);
		}

}
