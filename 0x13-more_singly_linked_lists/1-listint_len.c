#include<stdio.h>
#include "lists.h"
/**
 * listint_len - Entry point
 *
 * @h: use sizeof
 *
 * Return: 0 (Success)
*/
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
