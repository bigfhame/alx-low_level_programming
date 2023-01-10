#include <stdio.h>
#include "main.h"
/**
 *_isupper - uppercase checker
 *@c: integer
 *Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
