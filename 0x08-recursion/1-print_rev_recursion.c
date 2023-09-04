#include<stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Entry point
 *
 * @s: use sizeof
 *
 * Return: 0 (Success)
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(++s);
	_putchar(*(s - 1));
}
