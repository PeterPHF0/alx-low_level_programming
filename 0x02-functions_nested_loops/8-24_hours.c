#include<stdio.h>
include "main.h"
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
void jack_bauer(void)
{
	int i = 0, j = 0, c = 0, v = 0;

	while (i <= 2)
	{
		while (j <= 3)
		{
			while (c <= 5)
			{
				while(v <= 9)
				{
					_putchar((char)i);
					_putchar((char)j);
					_putchar(':');
					_putchar((char)c);
					_putchar((char)v);
					v++;
				}
				c++;
			}
			j++;
		}
		i++;
	}
}
