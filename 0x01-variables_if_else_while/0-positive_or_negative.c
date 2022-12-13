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
printf("%d" , n "is POSITIVE");
}
else if (n < 0)
{
printf("%d" , n "is NEGATIVE");
}
else
{
printf("%d" , n "is ZERO");
}
return (0);
}
