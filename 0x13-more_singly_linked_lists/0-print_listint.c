#include<stdio.h>
#include "lists.h"
/**
 * print_listint - Entry point
 *
 * @h: use sizeof
 *
 * Return: 0 (Success)
*/

size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
