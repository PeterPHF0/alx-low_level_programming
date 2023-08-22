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
	int len = _strlen(s);

	while (len != 0)
	{
		_putchar(s[len-1]);
		len--;
	}

}
