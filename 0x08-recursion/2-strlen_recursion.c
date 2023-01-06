#include "main.h"
/**
 *_strlen_recursion - string lenght
 *@s: string lenght to access
 *
 *Return: an int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
