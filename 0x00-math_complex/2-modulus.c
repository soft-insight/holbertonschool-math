#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 *
 *
 *
 */

double modulus(complex c)
{
	double modulo;
	modulo = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (modulo);
}
