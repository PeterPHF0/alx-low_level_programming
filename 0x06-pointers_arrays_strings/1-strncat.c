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

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = strlen(dest), counter = 0;

	while (counter < n)
	{
		dest[len_dest] = *src;
		len_dest++;
		src++;
		counter++;
	}
	return (dest);
}
