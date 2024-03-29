#include "holberton.h"

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
	c3->re = (c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im);
	c3->im = (c1.im * c2.re - c1.re * c2.im) / (c2.re * c2.re + c2.im * c2.im);
}

