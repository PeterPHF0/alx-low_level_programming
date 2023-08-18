#include<stdio.h>
/**
 *  _isdigit - Entry point
 *
 * @c: use sizeof
 *
 * Return: 0 (Success)
*/
int _isdigit(int c)
{
	char zero = '0';

	while (zero <= '9')
	{
		if (c == zero)
		{
			return (1);
		}
		zero++;
	}
	return (0);
}
