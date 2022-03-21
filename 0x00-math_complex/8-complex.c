#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - complex from arg and mod
 * @m: the modulus
 * @arg: the argument
 * @c3: pointer to the result
 *
 * Return: void;
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = sqrt(pow(m, 2) / (1 + pow(tan(arg), 2)));
	c3->im = c3->re * tan(arg);
}

