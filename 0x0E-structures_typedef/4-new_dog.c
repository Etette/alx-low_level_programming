#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to memory containing string
 * @s: pointer to the string
 * Return: pointer to string in memory
 */

char *_strdup(char *s)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (!s)
		return (NULL);
	/*get length of *s*/
	while (s[i] != '\0')
		i += 1;
	i++;
	ptr = malloc(sizeof(*ptr) * i);
	if (!ptr)
		return (NULL);
	while (j < i)
	{
		ptr[j] = s[i];
		j++;
	}
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: name param
 * @age: age param
 * @owner: char param
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(struct dog));
	if (!newDog)
		return (NULL);
/* assign name element of new struct to copy of name*/
	newDog->name = _strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
/*Assign owner of new struct to copy of owner*/
	newDog->owner = _strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}

