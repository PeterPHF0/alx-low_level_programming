
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
	char a = 97;
	char A = 65;
	
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
				if (agrv[i] == a || agrv[i] == A)
				{
					printf("Error");
					return (0);
				}
				a++;
				A++;
			}
			sum += argv[i];
			i++;
		}
	}
	return (0);
}
