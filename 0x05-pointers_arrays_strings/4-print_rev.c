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
	int ind;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	ind = len - 1;

	while (ind != -1)
	{
		_putchar(s[ind]);
		ind--;
	}
	_putchar('\n');
}
