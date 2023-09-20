#include<stdio.h>
#include <string.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	dog.name = name;
	dog.age = age;
	dog.owner = owner;
	dog_name = (char *)malloc(strlen(name) * sizeof(char));
	if (dog_name == NULL)
		return (NULL);
	dog_ow = (char *)malloc(strlen(name) * sizeof(char));
	if(dog_owner == NULL)
		return (NULL);
	return (dog);
}
