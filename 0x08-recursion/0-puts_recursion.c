#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion((++s));
	}
	else
	{
		_putchar('\n');
	}
}
