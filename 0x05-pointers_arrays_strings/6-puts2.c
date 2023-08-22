#include<stdio.h>
#include "main.h"
/**
 * puts2 - Entry point
 *
 * @str: use sizeof
 *
 * Return: 0 (Success)
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str+=2;
	}
}
