#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
#include<string.h>
/**
 *  print_strings- Entry point
 *
 * @separator: use sizeof
 * @n: num
 *
 * Return: 0 (Success)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	
	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(args, char*) != NULL)
			printf("%s", va_arg(args, char*);
		else
			printf("(nil)");
		if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	printf("%s", va_arg(args, char*);
	putchar('\n');
}
