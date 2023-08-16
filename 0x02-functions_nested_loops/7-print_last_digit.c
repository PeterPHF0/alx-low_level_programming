#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: use sizeof
 *
 * Return: 0 (Success)
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
