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
			if (strlen(argv[i]) != 1 )
			{
				printf("Error\n");
				return (1);
			}
			while (a <= 122)
			{
				if (*argv[i] == a || *argv[i] == A)
				{
					printf("Error\n");
					return (1);
				}
				a++;
				A++;
			}
			sum += atoi(argv[i]);
			i++;
			a = 'a';
			A = 'A';
		}
		printf("%d\n", sum);
	}
	return (0);
}
