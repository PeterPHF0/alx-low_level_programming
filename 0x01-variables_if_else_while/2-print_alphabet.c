#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int digit = 97;

	while (putchar(digit) < 'z')
	{
		printf("%c", putchar(digit));
	}
	printf("\n");
	return (0);
}
