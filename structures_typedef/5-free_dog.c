#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - entry
  * @d: pointer to st≈ruct
  * Return: what does it return?
  */


void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
