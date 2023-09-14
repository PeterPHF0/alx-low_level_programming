#include<stdio.h>
#include"function_pointers.h"
/**
 * int_index - Entry point
 *
 * @array: pointer to the first element of an int array
 * @size: array size
 * @cmp: pointer to a function to be executed
 *
 * Return: 0 (Success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	if (array == NULL || size <= NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		is_one = cmp(array[i]);
		if (is_one)
			return (i);
		i++;
	}
	return (-1);
}
