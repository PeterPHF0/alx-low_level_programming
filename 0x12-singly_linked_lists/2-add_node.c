#include<stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Entry point
 *
 * @head: pointer to a pointer to a list_t variable
 * @str: value of the node
 *
 * Return: 0 (Success)
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodePtr;
	list_t *temp;

	nodePtr = (list_t *)malloc(sizeof(list_t));
	if (nodePtr == NULL)
		return (NULL);
	nodePtr->str = strdup(str);
	nodePtr->len = strlen(str);
	temp = *head;
	*head = nodePtr;
	nodePtr->next = temp;
	return (nodePtr);
}
