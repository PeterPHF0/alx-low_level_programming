#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/

char *str_concat(char *s1, char *s2)
{
	int len = strlen(s1) + strlen(s2) + 1;
	char *conc;
	unsigned int i = 0,j = 0;
	if (s1 == NULL)
		s1 = "";
	else if (s2 == 	NULL)
		s2 = "";
	conc = (char*)malloc(len * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	while (i < strlen(s1))
	{
		conc[i] = s1[i];
		i++;
	}
	while (j <= strlen(s2))
	{
		conc[i] = s2[j];
		i++;
		j++;
        }
	return (conc);
}
