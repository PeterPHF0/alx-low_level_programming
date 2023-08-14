#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;
	int n_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n_last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, n_last_digit);
	if (n_last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (n_last_digit < 6 && n_last_digit != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else if (n_last_digit)
	{
		printf("0\n");
	}
	return (0);
}
