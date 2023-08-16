#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
void jack_bauer(void)
{
	int i = '0', j = '0', c = '0', v = '0';

	while (i <= '2')
	{
		while (j <= '3')
		{
			while (c <= '5')
			{
				while(v <= '9')
				{
					
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(c);
					putchar(v);
					putchar('\n');
					v++;
				}
				v = 0;
				c++;
			}
			c = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
