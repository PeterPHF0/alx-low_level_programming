#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Entry point
 *
 * @head: use sizeof
 *
 * Return: 0 (Success)
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
