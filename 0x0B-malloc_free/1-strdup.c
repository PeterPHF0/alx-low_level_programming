#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strdup - Entry point
 *
 * @str: string to be duplicated
 *
 * Return: 0 (Success)
*/

char *_strdup(char *str)
{
	char *dupstr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	dupstr = (char*)malloc(strlen(str) * sizeof(char));
	
	while (*str != '\0')
	{
		dupstr[i] = str[i];
		i++;
	}
	return (dupstr);
}
