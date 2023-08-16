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
	char str[] = "_putchar";

	for(int i = 0;i<8;i++)
	{
		putchar(str[i]);
	}
	return (0);
}
