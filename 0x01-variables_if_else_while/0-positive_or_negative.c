#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point*
*
* Return: always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is POSITIVE");
}
else if (n < 0)
{
printf("%d is NEGATIVE");
}
else
{
printf("%d is ZERO");
}
return (0);
}
