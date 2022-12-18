#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0
*/
int main(void)
{
int la = 0;
while (la < 10)
{
putchar(la + '0');
if (la < 9)
{
putchar(',');
putchar(' ');
}
la++;
}
putchar('\n');
return (0);
}
