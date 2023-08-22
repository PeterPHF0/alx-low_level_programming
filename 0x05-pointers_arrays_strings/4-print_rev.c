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
	int *str = s;

	while (str != '\0')
	{
		len++;
		str++;
	}

	while ((len - 1) != 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

}
