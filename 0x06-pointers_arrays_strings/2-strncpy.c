#include<stdio.h>
#include <string.h>
/**
 * _strncpy - Entry point
 *
 * @dest: 1st string
 *
 * @src: 2nd string
 *
 * @n: number of concatenated char
 *
 * Return: 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (counter < n && *src != '\0')
	{
		dest[counter] = *src;
		src++;
		counter++;
	}
	while (*src == '\0' && counter < n)
        {
            dest[counter] = '\0';
            counter++;
        }
	return (dest);
}
