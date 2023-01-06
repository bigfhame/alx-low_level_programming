#include "main.h"
#include <string.h>

/**
 *_strlen_recursion - check if string is palindrome or not
 *@s: string
 *Return: an int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 *_comparator - to compare characters in the string
 *@s: string to assess
 *@n1: smaller iterator
 *@n2: bigger iterator
 *Return: gaga
 */

int _comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if ((n1 == n2) || (n1 == n2 + 1))
		{
			return (1);
		}
		return (0 + _comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 *is_palindrome - function to check
 *@s: string to check
 *
 *Return: a string
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (_comparator(s, 0, _strlen_recursion(s) - 1));
}
