#include "main.h"

/**
 *_strcpy - function to copy string
 *
 *@dest: receiving address / destination
 *@src: source of string
 *Return: a character
 */

char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y++] = '\0';
	return (dest);
}
