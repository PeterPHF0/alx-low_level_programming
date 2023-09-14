#include <stdlib.h>
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
			while (a <= 122)
			{
				if (*argv[i] == a || *argv[i] == A)
				{
					printf("Error");
					return (0);
				}
				printf("emtered while");
				a++;
				A++;
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
