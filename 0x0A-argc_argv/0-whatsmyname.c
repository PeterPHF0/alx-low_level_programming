#include<stdio.h>
/**
 * main - Entry point
 *
 * @argc: num of command-line arguments
 *
 * @argv: array of strings(pointers to char)
 *
 * Return: 0 (Success)
*/

int main (int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
