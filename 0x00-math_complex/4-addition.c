#include "holberton.h"
#include <stdio.h>


/**
 * addition - sums 2 complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: pointer to the result
 *
 * Return: void
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.im;
	c3->im = c1.im + c2.im;
}
