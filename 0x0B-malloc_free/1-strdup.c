#include<stdio.h>
#include<stdlib.h>
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
	dupstr = (char*)malloc(strln(str) * sizeof(char));
	
	while (*str != '\0')
	{
		dupster[i] = str[i];
		i++;
	}
	return (dupstr);
}
