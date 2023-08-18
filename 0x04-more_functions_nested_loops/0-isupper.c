#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

int _isupper(int c)
{
	int A = 'A';

	while (A <= 'Z')
	{
		if (A == c)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
		A++;
	}

}
