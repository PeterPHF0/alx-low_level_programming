#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry point
 *
 * @b: use sizeof
 *
 * Return: 0 (Success)
*/

void *malloc_checked(unsigned int b)
{
	void *m_add = malloc(b);

	if (m_add == NULL)
		exit(98);
	return (m_add);
}
