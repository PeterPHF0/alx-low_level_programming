#include<stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Entry point
 *
 * @str: use sizeof
 *
 * Return: 0 (Success)
*/

void puts_half(char *str)
{
	int half;

	if (strlen(str) % 2 == 0)
	{
		half = strlen(str) / 2;
		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = ((strlen(str) - 1) / 2) + 1;
		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
