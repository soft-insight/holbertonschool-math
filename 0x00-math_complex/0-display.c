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
	if (c.im < 0)
		printf("%0.f - %0.fi\n", c.re, -1 * c.im);
	else
		printf("%0.f + %0.fi\n", c.re, c.im);
}

