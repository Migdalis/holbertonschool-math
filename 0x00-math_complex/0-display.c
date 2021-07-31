#include <stdio.h>
#include "holberton.h"

/**
 *display_complex_number - Function the displays the complex numbers
 *@c: Complex number to display
 *Description: Function that
 **/
void display_complex_number(complex c)
{
        if (c.im == 0)
                printf("%.0f\n", c.re);
        else
                printf("%.0f + %.0fi\n", c.re, c.im);
}
