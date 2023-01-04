#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*_islower - check for lowercase character
*@c: character to check
*Return: always 0
*/
int _islower(int c)
{
c = 'a';
if (c <= 'z')
{
	putchar(1);
}
else
{
putchar(0);
}
return (c);
}
