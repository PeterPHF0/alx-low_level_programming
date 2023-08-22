#include<stdio.h>
#include<string.h>
/**
 * _strcpy - Entry point
 *
 * @dest: use sizeof
 * 
 * @src: fasf
 *
 * Return: 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i = 0;

	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
