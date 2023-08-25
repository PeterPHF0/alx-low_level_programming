#include<stdio.h>
#include <string.h>
/**
 * _strcat - Entry point
 *
 * @dest: 1st string
 *
 * @src: 2nd string
 *
 * Return: 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	int len_dest = strlen(dest);

	while (*src != '\0')
	{
		dest[len_dest] = *src;
		len_dest++;
		src++;
	}
	return (dest);
}
