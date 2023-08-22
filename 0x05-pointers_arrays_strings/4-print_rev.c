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

	for (int i = len-1; i <= 0; i--)
	{
		_putchar(s[i]);
	}

}
