#include <stdio.h>
#include "holberton.h"

/**
 *display_complex_number - Function the displays the complex numbers
 *@c: Complex number to display
 *Description: Function that
 **/
void display_complex_number(complex c)
{
        if (c.re != 0)
        {
                if (c.im == 0)
                        printf("%.0f\n", c.re);
                else if (c.im == 1)
                        printf("%.0f + i\n", c.re);
                else if (c.im == -1)
                        printf("%.0f - i\n", c.re);
                else if (c.im < 0)
                        printf("%.0f - %.0fi\n", c.re, c.im);
                        else
                                printf("%.0f + %.0fi\n", c.re, c.im);
        }
        if (c.re == 0)
        {
                if (c.im == 0)
                        printf("0");
                else if (c.im == 1)
                        printf("i\n");
                else if (c.im == -1)
                        printf("- i\n");
                else if (c.im < 0)
                        printf("- %.0fi\n", c.im);
                        else
                                printf("%.0fi\n", c.im);
        }
}
