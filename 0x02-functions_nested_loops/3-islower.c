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
c = 97;
if (c <= 122)
{
return (1);
}
else if (c <= 96)
{
return (0);
}
}
