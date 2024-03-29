#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - prints complex and real numbers
 * @c: the name of the struct
 *
 * Return: void
 */

void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im < 0)
			printf("- %.9gi\n", c.im * (-1));
		else if (c.im == 0)
			printf("0\n");
		else
			printf("%.9gi\n", c.im);
	}
	else
	{
		if (c.im < -1)
			printf("%.9g - %.9gi\n", c.re, c.im * (-1));
		else if (c.im == -1)
			printf("%.9g - i\n", c.re);
		else if (c.im == 0)
			printf("%.9g\n", c.re);
		else if (c.im == 1)
			printf("%.9g + i\n", c.re);
		else
			printf("%.9g + %.9gi\n", c.re, c.im);
	}
}
