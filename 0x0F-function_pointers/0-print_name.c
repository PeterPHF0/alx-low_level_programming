#include<stdio.h>
/**
 * print_name - Entry point
 *
 * @name: name of a person
 * @f: function pointer
 *
 * Return: 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
