#include<stdio.h>
#include"main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: use sizeof
 *
 * Return: 0 (Success)
*/
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (j < n)
			{
				for (int i = 0; i < j; i++)
				{
					_putchar('\\');
				}
				j++;
				_putchar('\n');
			}
			i++;
		}
	}

}
