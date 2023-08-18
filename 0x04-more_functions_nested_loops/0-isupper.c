#include<stdio.h>
/**
 * _isupper - Entry point
 *
 * @c: use sizeof
 *
 * Return: 0 (Success)
*/

int _isupper(int c)
{
	char A = 'A';

	while (A <= 'Z')
	{
		if (c == A)
		{
			return (1);
		}
		A++;
	}
	return {0};
}
