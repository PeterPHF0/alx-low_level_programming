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

	arr = (char*)malloc(size * sizeof(char));
	if (size <= 0 || arr == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
