#include "holberton.h"
#include <math.h>
#include <stdlib.h>

/**
 * division - division of two complex numbers
 * @c1: first
 * @c2: second
 * @c3: pointer to the result
 *
 * Return: void
 */

void division(complex c1, complex c2, complex *c3)
{
	if (c2.re == 0 && c2.im == 0)
		exit(-1);
	c3->re = (c1.re * c2.re + c1.im * c2.im) / (pow(c2.re, 2) + pow(c2.im, 2));
	c3->im = (c1.im * c2.re - c1.re * c2.im) / (pow(c2.re, 2) + pow(c2.im, 2));
}

