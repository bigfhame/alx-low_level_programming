#include "main.h"

/**
 *_strlen - string to print length
 *
 *@s: string
 *Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
