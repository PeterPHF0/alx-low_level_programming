#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

int _strlen_recursion(char *s)
{
	char *first = &s[0];
	int len;
	while (*s != '\0')
	{
		s++;
	}
	len = (int)s - (int)first;
	return (len);
}
