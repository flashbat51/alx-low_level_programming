#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner
 * Return: struct dog or NULL (if it fails)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, boogy, George;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (boogy = 0; name[boogy]; George++)
		;

	for (George = 0; owner[George]; George++)
		;

	p_dog->name = malloc(boogy + 1);
	p_dog->owner = malloc(George + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < George; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
