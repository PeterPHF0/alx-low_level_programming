#include<stdio.h>
#include "lists.h"
/**
 * list_len - Entry point
 *
 * @h: pointer to the header node
 *
 * Return: 0 (Success)
*/
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
