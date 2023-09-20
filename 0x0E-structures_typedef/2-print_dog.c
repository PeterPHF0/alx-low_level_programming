#include<stdio.h>
/**
 * print_dog - Entry point
 *
 * @d: dog struct
 *
 * Return: 0 (Success)
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d.name != NULL)
		printf("%s\n", d.name);
	else 
		printf("(nil)\n");
	printf("Age: ");
	if (d.age != NULL)
		printf("%f\n", d.age);
	else
		printf("(nil)\n");
	printf("Owner: ");
	if (d.owner != NULL)
		printf("%s\n", d.owner);
	else
		printf("(nil)\n");


}
