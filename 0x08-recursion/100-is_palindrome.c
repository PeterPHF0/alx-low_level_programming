#include<stdio.h>
#include <string.h>
/**
 * palindrome - Entry point
 *
 * @s: use sizeof
 * @i: first index
 * @j: last index
 *
 * Return: 0 (Success)
*/
int palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (palindrome(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - Entry point
 *
 * @s: use sizeof
 *
 * Return: 0 (Success)
*/
int is_palindrome(char *s)
{
	if (strlen(s) == 1)
		return (1);
	return (palindrome(s, 0, strlen(s) - 1));
}
