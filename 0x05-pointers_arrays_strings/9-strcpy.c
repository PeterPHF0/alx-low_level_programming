#include<stdio.h>
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

	for (int i =0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
