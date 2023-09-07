
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
	if (argc < 3)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
