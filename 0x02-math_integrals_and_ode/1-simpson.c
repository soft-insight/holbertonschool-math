#include "simpson.h"
#include <math.h>
#include <stdio.h>

/**
 * simpson - calculates integrals by Simpson's rule
 * @a: inferior limit
 * @b: superior limit
 * @steps: pasos
 *
 * Return: the value of the numerical integral
 */

double simpson(double a, double b, int steps)
{
	double area;
	double yL, yC, yR;
	double h;
	int i;

	area = 0;

	h = (b - a) / steps;

	if (steps % 2 != 0)
	{
		for (i = 0; i < steps / 2; i++)
		{
			yL = 1 / (1 + pow(a +  2 * i * h, 2));
			yR = 1 / (1 + pow(a +  2 * (i + 1) *  h, 2));
			yC = 1 / (1 + pow(a +  (2 * i + 1) * h, 2));
			area = h / 3  * (yL + 4 * yC + yR) + area;
		}
			yR = 1 / (1 + pow(a +  steps *  h, 2));
			yL = 1 / (1 + pow(a + (steps - 1) * h, 2));

			area = h / 3  * (yR + yL) + area;
	}
	else
	{
		for (i = 0; i < steps / 2; i++)
		{
			yL = 1 / (1 + pow(a +  2 * i * h, 2));
			yR = 1 / (1 + pow(a +  2 * (i + 1) *  h, 2));
			yC = 1 / (1 + pow(a +  (2 * i + 1) * h, 2));
			area = h / 3  * (yL + 4 * yC + yR) + area;
		}
	}

	return (area);
}
