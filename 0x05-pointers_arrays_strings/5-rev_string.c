#include<stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - Entry point
 *
 * @s: pointer to char (first char of a string)
 *
 * Return: 0 (Success)
*/

void rev_string(char *s)
{
	int len = 0;
	char *str = s;
	int ind;
	char str2[];
	int i = 0 ;


	while (*str != '\0')
	{
		str2[len] = s[len];
		len++;
		str++;
	}
	ind = len - 1;

	while (ind != -1)
	{
		s[i] = str2[ind];
		ind--;
		i++;
	}
}
