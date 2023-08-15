#include <stdlib,h>
#include "dog.h"

/**
 * _strlen - returns the length of string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}

	return (e);
}

/**
 * *_strcpy - copies string pointed to by src
 * including terminating null byte ('\0')
 * to buffer pointed to by dest
 * @dest: pointer to the buffer of string to be copied
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int nam, e;

	nam = 0;

	while (src[nam] != '\0')
	{
		nam++;
	}

	for (e = 0; e < len; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: pointer to new dog on success and NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nam1, nam2;

	nam1 = _strlen(name);
	nam2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (nam1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (nam2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
