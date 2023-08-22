#include<stdio.h>
#include "main.h"
#include <string.h>
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
		if (*(str + 1) == '\0')
		{
			break;
		}
		str += 2;
	}
	_putchar('\n');
}
