#include<stdio.h>
#include <string.h>
/**
 * _strncat - Entry point
 *
 * @dest: 1st string
 *
 * @src: 2nd string
 *
 * @n: number of concatenated char
 *
 * Return: 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = strlen(dest), counter = 0;

	while (counter < n && *src != '\0')
	{
		dest[len_dest] = *src;
		len_dest++;
		src++;
		counter++;
	}
	return (dest);
}
