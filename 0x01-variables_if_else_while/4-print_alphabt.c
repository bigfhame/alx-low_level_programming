#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0
*/
int main(void)
{
char lc, llc = 'f', luc = 'r';
for (lc = 'a'; lc < 'e' && llc < 'q' && luc <= 'z'; lc++, llc++, luc++)
{
putchar("%d");
}
putchar('\n');
return (0);
}
