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
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		printf("%c", a);
		a++;
	}
	while (A < 'Z')
	{
		printf("%c", A);
		A++;
	}
	printf("\n");
	return (0);
}
