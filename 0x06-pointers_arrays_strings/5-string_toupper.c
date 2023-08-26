#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		*c = *c + 32;
	}
	return c;
}
