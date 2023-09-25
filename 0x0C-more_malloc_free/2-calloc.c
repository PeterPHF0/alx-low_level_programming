#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;
	char zero = 0;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	while(i < (size * nmemb))
	{
		ptr[i] = zero;
		i++;
	}
	return(ptr);

}
