#include<stdio.h>
#include"main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

void print_most_numbers(void)
{
	int zero = 48;

	while (zero <= 57)
	{
		if (zero != 50 && zero != 52)
		{
			_putchar(zero);
		}
		zero++;
	}
	_putchar('\n');
}
