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
	char *num;

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		num = va_arg(args, char*);
		if (num != NULL)
			printf("%s", num);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
