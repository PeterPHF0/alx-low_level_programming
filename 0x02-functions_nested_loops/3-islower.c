#include<stdio.h>
#include<ctype.h>
/**
 * _islower - return 1 if the char is lower and 0 if not
 *
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
