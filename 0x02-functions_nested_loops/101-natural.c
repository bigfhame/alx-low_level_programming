#include <stdio.h>

/**
 *main - prints sum of multiples of 3 and 5 up to 1024
 *Return: always 0
 */

int main(void)
{
	int a, z = 0;

	while (a < 1024)
	{
	if ((a % 3 === 0) || (a % 5 == 0))
	{
		z += a;
	}
	a++;
	}
	printf("%d\n", z);
	return (0);
}
