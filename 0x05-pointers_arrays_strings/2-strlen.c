#include<stdio.h>
/**
 * _strlen - Entry point
 *
 * @s: use sizeof
 *
 * Return: 0 (Success)
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
