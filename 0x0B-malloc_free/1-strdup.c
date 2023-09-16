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
	dupstr = (char *)malloc(strlen(str) * sizeof(char));
	if (dupstr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		dupstr[i] = str[i];
		i++;
	}
	dupstr[i] = str[i];
	return (dupstr);
}
