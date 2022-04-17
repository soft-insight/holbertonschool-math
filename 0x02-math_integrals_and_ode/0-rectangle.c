#include "rectangle.h"
#include <stdio.h>
#include <math.h>

/**
 *
 *
 *
 */


double rectangle_method(double a, double b, int steps )
{
	double sum = 0;
	double h;
	int i;

	h = (b - a)/steps;
	
	for (i = 0; i < steps; i++)
		sum = h * (1 / (1 + pow((a + i * h), 2) ) ) + sum;
	return (sum);
}
