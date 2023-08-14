#include<stdio.h>
#include<sunistd.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 1 (Success)
*/
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, 58);
	return (1);
}
