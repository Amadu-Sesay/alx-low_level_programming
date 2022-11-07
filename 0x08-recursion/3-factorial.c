#include "main.h"

/**
* factorial- factorial of a given number
* @n: pointer block of memory to be filled
* Return: factorial
*/
int factorial(int n)
{
	if (n == 0) /* base condition */
	return (1);
	else if (n < 0) /* base condition */
	return (-1);
	else
	return (n * factorial(n - 1)); /* recursusion */
}

