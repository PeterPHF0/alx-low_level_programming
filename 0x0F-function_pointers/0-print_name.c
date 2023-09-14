#include<stdio.h>
#include "function_pointers.h"
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
	if (f == NULL)
		return ;
	f(name);
}
