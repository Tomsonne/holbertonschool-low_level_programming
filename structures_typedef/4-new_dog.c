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
unsigned int nl, ol, i;
dog_t *dog;

if (name == NULL || owner == NULL)
	return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
for (nl = 0; name[nl]; nl++)
	;
nl++;
dog->name = malloc(nl *sizeof(char));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
for (i = 0; i < nl; i++)
	dog->name[i] = name[i];
dog->age = age;
for (ol = 0; owner[ol]; ol++)
	;
ol++;
dog->owner = malloc(ol *sizeof(char));
if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
for (i = 0; i < ol; i++)
	dog->owner[i] = owner[i];
return (dog);
}
