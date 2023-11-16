#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Entry point
 *
 * @head: use sizeof
 *
 * Return: 0 (Success)
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
