#include "holberton.h"

/**
 * substraction - subs two complex number
 * @c1: the first
 * @c2: the second
 * @c3: pointer to the subs
 *
 * Retrun: void
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
