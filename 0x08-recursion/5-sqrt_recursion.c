#include<stdio.h>
/**
 * _sqrt_recursion - Entry point
 *
 * @n: use sizeof
 *
 * Return: 0 (Success)
*/
/**
 * get_sqrt - Entry point
 *
 * @n: use sizeof
 * @i: cc
 *
 * Return: 0 (Success)
*/
int get_sqrt(int n, int i)
{
	if (i == n)
		return (-1);
	if (i * i == n)
		return (i);
	return get_sqrt(n, i + 1);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0 )
		return n;
	return get_sqrt(n, 2);
}
