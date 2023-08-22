#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

void print_rev(char *s)
{
	int len = 0;
	char *str = s;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	int ind = len - 1;

	while (ind != -1)
	{
		_putchar(s[ind]);
		ind--;
	}

}
