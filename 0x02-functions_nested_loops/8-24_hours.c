#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - Entry point
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
		while (j <= '9')
		{
			while (c <= '5')
			{
				while (v <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(c);
					putchar(v);
					putchar('\n');
					v++;
				}
				v = '0';
				c++;
			};
			c = '0';
			j++;
			if (i == '2' && j == '4')
			{
				break;
			}
		}

		j = '0';
		i++;
	}
}
