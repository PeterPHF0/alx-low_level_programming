#include<stdio.h>
/**
 * factorial - Entry point
 *
 * @n: use sizeof
 *
 * Return: 0 (Success)
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return n * factorial(n - 1);
}
