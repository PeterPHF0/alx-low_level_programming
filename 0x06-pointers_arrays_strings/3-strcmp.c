#include<stdio.h>
#include <string.h>
/**
 * _strcmp - Entry point
 *
 * @s1: use sizeof
 *
 * @s2: vrf
 *
 * Return: 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int counter = 0;

	while(*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		counter++;
	}
	if (counter == len1)
	{
		return (0);
	}
	return (*s1 - *s2);
}
