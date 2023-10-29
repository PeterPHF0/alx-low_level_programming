#include <stdlib.h>
#include<stdio.h>
#include <string.h>
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
	int i = 1;
	int j = 0;
	int sum = 0;
	char a = 'a';
	char A = 'A';

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (argv[i] != NULL)
		{
			while (a <= 122)
			{
				while (argv[i][j] != '\0')
				{
					if (argv[i][j] == a || argv[i][j] == A)
					{
						printf("Error\n");
						return (1);
					}
					j++;
				}
				j = 0;
				a++;
				A++;
			}
			sum += atoi(argv[i]);
			i++;
			j = 0;
			a = 'a';
			A = 'A';
		}
		printf("%d\n", sum);
	}
	return (0);
}
