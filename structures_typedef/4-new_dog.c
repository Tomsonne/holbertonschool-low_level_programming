#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - entry
  * @name: name
  * @age:  age
  * @owner: owner
  * Return: returns pointer to buffer of datatype dog
  */




dog_t *new_dog(char *name, float age, char *owner)
{
int nlen, olen, i;
dog_t *doggy;

nlen = olen = 0;
while (name[nlen])
nlen++;
while (owner[olen])
olen++;

doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
	return (NULL);


doggy->name = malloc((nlen + 1) *sizeof(char));
if (doggy == NULL)
{
	free(doggy);
	return (NULL);
}

for (i = 0; i < nlen; i++)
	doggy->name[i] = name[i];
doggy->name[nlen] = '\0';

doggy->age = age;


doggy->owner = malloc((olen + 1) *sizeof(char));
if (doggy == NULL)
{
	free(doggy->name);
	free(doggy);
	return (NULL);
}
for (i = 0; i < olen; i++)
	doggy->owner[i] = owner[i];
doggy->owner[olen] = '\0';
return (doggy);
}
