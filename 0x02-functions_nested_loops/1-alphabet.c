#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char a ='a';
	
	while(a <= 'z')
	{
		_putchar(a);
		a++;
	
	}
	_putchar('\n');
	return (0);
}
