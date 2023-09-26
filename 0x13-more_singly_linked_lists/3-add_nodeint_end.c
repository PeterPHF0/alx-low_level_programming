#include<stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Entry point
 *
 * @head: use sizeof
 * @n: gg
 *
 * Return: 0 (Success)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		node->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	return (node);
}
