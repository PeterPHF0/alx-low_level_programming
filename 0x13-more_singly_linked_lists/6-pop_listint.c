#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Entry point
 *
 * @head: use sizeof
 *
 * Return: 0 (Success)
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n = (*head)->n;
	
	if (!*head)
		return (0);

	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (n);
}
