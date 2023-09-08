#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = (char*)malloc(size * sizeof(char));
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
