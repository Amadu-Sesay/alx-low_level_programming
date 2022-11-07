#include "main.h"
#include <stdio.h>

/**
 * swap_int -swap values of integers
 * @a : first integer
 * @b: second integer
 * Return : Alwqsy 0 (success)
 */
void swap_int(int *a, int *b)
{
	int constant = *a;

	*a = *b;
	*b = constant;

}
