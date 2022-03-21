#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * argument - calculates the arg of z
 * @c: the struct of the complex number
 *
 * Return: the arg
 */

double argument(complex c)
{
	double angle;

	angle = atan(c.im / c.re);
	return (angle);
}
