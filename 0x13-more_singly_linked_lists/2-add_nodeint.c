#include<stdio.h>
#include "lists.h"
/**
 * add_nodeint - Entry point
 *
 * @head: use sizeof
 * @n: ff
 *
 * Return: 0 (Success)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

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
		node->next = *head;
		*head = node;
	}
	return (node);
}
