#include<stdio.h>
#include "3-calc.h"
#include<string.h>
/**
 * get_op_func - Entry point
 *
 * @s: operator char
 *
 * Return: pointer to function corresponding to the entered operator (Success)
*/

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
    };
    int i = 0;

    while(i < 5)
    {
    	if (*s == *(ops[i].op) && strlen(s) == 1)
		return (ops[i].f);
	i++;
    }
    return (NULL);
}
