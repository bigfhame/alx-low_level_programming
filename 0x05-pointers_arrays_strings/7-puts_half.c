#include "main.h"

/**
 *puts_half - to print the second half of a string
 *
 *@str: string to print half of
 *Return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	/** J is length of the string */
	if (j % 2 == 1)
		/** this j % 2 == 1 signifies odd number */
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
