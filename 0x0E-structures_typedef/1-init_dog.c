#include "dog.h"
#include <stddef.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: dog structure
 * @name: dog name
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !=NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
