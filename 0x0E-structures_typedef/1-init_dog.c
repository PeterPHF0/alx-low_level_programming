#include<stdio.h>
#include"dog.h"
/**
 * init_dog - Entry point
 *
 * @dog: vdfv
 * @name:ffvf
 * @age:vfv
 * @owner: vdfv
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
