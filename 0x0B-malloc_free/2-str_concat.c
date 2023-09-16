#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int i = 0, j = 0;
	
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	conc_str = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (conc_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		conc_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conc_str[i] = s2[j];
		i++;
		j++;
	}
	conc_str[i] = s2[j];
	return (conc_str);
}
