#include<stdio.h>
/**
 * string_toupper - Entry point
 *
 * @c: use sizeof
 *
 * Return: 0 (Success)
*/

char *string_toupper(char *c)
{
	char i = 97;
	bool low = 0;

	while (*c != '\0')
	{
		while (i <= 122)
		{
			if (*c == i)
			{
				low = 1;
				break;
			}
			i++;
		}
		if (low == 1)
		{
			*c = *c + 32;
		}
		c++;
		low = 0;
	}
	return c;
}
