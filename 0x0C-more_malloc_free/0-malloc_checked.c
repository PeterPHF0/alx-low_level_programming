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

void *malloc_checked(unsigned int b)
{
	void *m_add = malloc(b);

	if (m_add == NULL)
		exit(98);
	return (m_add);
}
