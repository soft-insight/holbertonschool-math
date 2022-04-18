#include "simpson.h"
#include <math.h>
#include <stdio.h>

/**
 *
 *
 *
 */

double simpson(double a, double b, int steps )
{
	double area;
	double yL, yC, yR;
	double h;
	int i;

	area = 0;
	
	steps = steps / 2 * 2;
	printf("%d\n", steps / 2 * 2);

	h = (b - a)/steps;
	
	for (i = 0; i < steps / 2; i++)
	{
		yL = 1 / (1 + pow(a + 2 * i * h, 2) );
		yR = 1 / (1 + pow(a + 2 * (i + 1) *  h, 2));
		yC = 1 / (1 + pow(a + (2 * i + 1) * h, 2));
		
		area = h / 3  * ( yL + 4 * yC + yR) + area;
	}
	return (area);
}
