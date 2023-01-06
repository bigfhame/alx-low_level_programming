#include "main.h"

/**
 *factorial - the factorials
 *@n: number of factorial
 *
 *Return: an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
