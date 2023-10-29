
#include<stdio.h>
/**
 * main - Entry point
 *
 * @argc: use sizeof
 *
 * @argv: array
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	(void)argc;
	return (0);
}
