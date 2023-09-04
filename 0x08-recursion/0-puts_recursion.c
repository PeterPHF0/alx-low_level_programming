#include<stdio.h>
#include "main.h"
/**
 * _puts_recursion - Entry point
 *
 * @s: use sizeof
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
