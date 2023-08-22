#include<stdio.h>
/**
 * swap_int - swap 2 int
 *
 * @*a: address of the first var
 *
 * @*b: address of the second var
 *
 * Return: 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
