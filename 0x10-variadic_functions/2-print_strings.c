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
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(args, char*);
		if (num != NULL)
			printf("%s", num);
		else
			printf("(nil)");
		if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	printf("%s", va_arg(args, char*));
	putchar('\n');
	va_end(args);
}
