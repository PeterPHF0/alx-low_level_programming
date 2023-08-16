#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet letters ten times
 *
*/
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		counter++;
	}
}
