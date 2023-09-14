#include<stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 *
 * @array: use sizeof
 * @size :sz
 * @action: gerg
 * Return: 0 (Success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size = 0)
		return;
	
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
