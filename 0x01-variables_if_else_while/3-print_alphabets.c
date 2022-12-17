#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
char lc = 'a';
char uc = 'A';
while (lc <= 'z')
{
putchar(lc);
lc++;
}
while (uc <= 'Z')
{
putchar(uc);
uc++;
}
putchar('\n');
return (0);
}
