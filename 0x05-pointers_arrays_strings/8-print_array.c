#include<stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 *
 * @a: use sizeof
 *
 * @n: kogkm
 *
 * Return: 0 (Success)
*/

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		while (i != (n-1))
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[n-1]);
	}
	pritnf("\n");
}
