#include<stdio.h>
#include"3-calc.h"
#include<string.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int (*op_fun)(int, int);
	int operand1, operand2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op_fun = get_op_func(argv[2]);
	if (op_fun == NULL)
	{
		printf("Error\n");
		return (99);
	}
	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && operand2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_fun(operand1, operand2);
	printf("%d\n", result);
	return (0);
}
