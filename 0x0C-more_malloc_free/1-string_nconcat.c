#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Entry point
 *
 * @s1: use sizeof
 * @s2: jvofedv
 *
 * Return: 0 (Success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *conc;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	conc = calloc(strlen(s1) + n + 1, sizeof(char));
	if (conc == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		conc[j] = s1[j];
		j++;
	}

	if (n >= strlen(s2))
	{
		strcpy(&conc[j], s2);
	}
	else
	{
		while (n)
		{
			conc[j] = s2[i];
			j++;
			i++;
			n--;
		}
		conc[j] = '\0';
	}
	return (conc);
}
