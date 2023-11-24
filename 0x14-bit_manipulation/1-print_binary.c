#include <stdio.h>
#include <math.h>
int power(int base, int exponent) {

	if (exponent == 0) {
		return (1);
	} else {
		return (base * power(base, exponent - 1));
	}
}


/**
 * print_binary - check the code
 * @n: int number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int exp = 0;
	unsigned long int two_pow_exp = (int)power(2, exp);
	int i;

	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	while (two_pow_exp <= n)
	{
		exp++;
		two_pow_exp = (int)power(2, exp);
	}
	exp = exp - 1;
	two_pow_exp = (int)power(2, exp);
	n = n - two_pow_exp;
	printf("%d", 1);

	for (i = exp - 1; i >= 0; i--)
	{
		two_pow_exp = (int)power(2, i);
		if (two_pow_exp <= n)
		{
			printf("%d", 1);
			n = n - two_pow_exp;
		}
		else
		{
			printf("%d", 0);
		}
	}
}
