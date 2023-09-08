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

	if (size <= 0)
	{
		return (NULL);
	}
	arr = (char*)malloc(size * sizeof(char));
	arr[0] = c;
	return (arr);
}
