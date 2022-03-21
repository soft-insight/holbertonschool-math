#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct complex - complex struct
 * @re: real part 
 * @im: imaginary part
 *
 * Return: void
 */

struct complex
{
	double re;
	double im;
};

void display_complex_number(struct complex c);

#endif

