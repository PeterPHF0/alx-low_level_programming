#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

int get_sqrt(int n, int i)
{
	if (i == n)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	return get_sqrt(n, 2);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n ==0 )
		return n;
	return get_sqrt(n, 2);
}
