#include<stdio.h>
#include "lists.h"
/**
 * sum_listint - Entry point
 *
 * @head: use sizeof
 *
 * Return: 0 (Success)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
