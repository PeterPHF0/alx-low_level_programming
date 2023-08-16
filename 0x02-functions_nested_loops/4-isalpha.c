#include<stdio.h>
#include<ctype.h>
/**
 * _isalpha - checks for a given input is a letter or not
 *
 * @c: char as an input
 *
 * Return: 0 or 1
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
