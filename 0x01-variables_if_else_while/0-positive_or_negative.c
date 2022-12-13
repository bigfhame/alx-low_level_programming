#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{
printf("%d is POSITIVE");
}
else if(n < 0)
{
printf("%d is NEGATIVE");
}
else
{
printf("%d is ZERO");
}
return (0);
}
