#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet letters
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;	
	}
	_putchar('\n');
}
