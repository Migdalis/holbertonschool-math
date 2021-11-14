#include "holberton.h"

/**
 *conjugate - Function that conjugate a given complex numbers
 *@c: Complex number to conjugate
 *Description: Function that returns the conjugate of a given complex number
 *Return: A struct type complex
 **/
complex conjugate(complex c)
{
c.im = c.im * -1;
return (c);
}
