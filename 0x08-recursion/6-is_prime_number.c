#include<stdio.h>
#include "main.h"
/**
 * is_prime_number - Entry point
 *
 * @n: use sizeof
 *
 * Return: 0 (Success)
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	return (is_divisible_by_i(n, 2));
}
/**
 * is_divisible_by_i - Entry point
 *
 * @n: use sizeof
 * @i: jjj
 *
 * Return: 0 (Success)
*/
int is_divisible_by_i(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_divisible_by_i(n, i + 1));
}
