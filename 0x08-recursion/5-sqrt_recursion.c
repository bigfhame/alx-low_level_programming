#include "main.h"

int _sqrt(int n, int i);

/**
 *_sqrt_recursion - natural square root
 *@n: number to be rooted
 *
 *Return: an int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *_sqrt - print natural square root
 *@n: base number
 *@i: iteration
 *Return: an int
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
