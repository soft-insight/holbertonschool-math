#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * display_complex_number - prints complex and real numbers
 * @c: the name of the struct
 *
 * Return: void
 */

void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%.2f\n", c.re);
	else if (c.re == 0)
		printf("%.2fi\n", c.im);
	else if (c.im < 0)
		printf("%.2f - %.2fi\n", c.re, -1 * c.im);
	else
		printf("%.2f + %.2fi\n", c.re, c.im);
}

