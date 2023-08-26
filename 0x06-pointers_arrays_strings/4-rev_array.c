#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int itr, i = 0, tmp;

	itr = n / 2;
	while (i < itr)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		i++;
		n--;
	}

}
