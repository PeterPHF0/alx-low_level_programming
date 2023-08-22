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
		if (str[strlen(str) - 1] == *str)
		{
			break;
		}
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
