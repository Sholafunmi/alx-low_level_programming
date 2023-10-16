#include <stdio.h>
#include "main.h"
/*
 * To reset_to_98
 * a function that takes a pointer to an int as parameter
 * and updates the value it points
 * @n: input
 * Return: n
 */

void reset_to_98(int *n);
{
	int n;

	n = 402;
	int *p = &n;
	*p = 98;
}
