#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
void free_listint(listint_t *head)
{
	free(head);
}
