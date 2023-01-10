#include "main.h"

/**
 *rev_string - reverses a string
 *
 *@s: string to reverse
 *
 *Return: void
 */

void rev_string(char *s)
{
	int b = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	{
		b++;
	}
	for (index = b - 1; index >= b / 2; index--)
	{
		tmp = s[index];
		s[index] = s[b - index - 1];
		s[b - index - 1] = tmp;
	}
}
