#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - calculate the complex conjugate
 * @c: the struct of the complex
 *
 * Return: a struct with the complex conjugate
 */

complex conjugate(complex c)
{
	c.re = c.re;
	c.im = (-1) * c.im;

	return (c);
}

