#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers - Entry point
 *
 * @separator: use sizeof
 * @n: num array
 *
 * Return: 0 (Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (*separator == NULL)
		{
			printf(" ");
			continue;
		}
		printf("%s", separator);
	}
	printf("%d", va_arg(args, int));
	putchar("\n");
}
