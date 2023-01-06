#include <stdio.h>
#include "main.h"

int prime_check(int n, int i);
/**
 *is_prime_number - return if its prime
 *@n: number to check
 *Return: int is returned
 */

int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
 *prime_check - checks the prime
 *@n: number to check
 *@i: iterate number
 *Return: an int
 */
int prime_check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_check(n, i + 1));
}
