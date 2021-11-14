#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *struct complex - Data for a complex number
 *@re: Real part
 *@im: Imaginary part
 *Description: Data for represented by two doubles a complex number
 */
typedef struct complex
{
double re;
double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif /*HOLBERTON_H*/
