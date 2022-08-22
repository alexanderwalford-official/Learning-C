#include <stdio.h>
#include <math.h>

int main () {

    // by importing maths.h we can gain access to things like:
    printf("%f", sqrt(18)); // square root!
    printf("%f", ceil(3.456)); // ceiling
    printf("%f", floor(2.345)); // floor
    printf("%f", power(6, 2)); // powers (6 to the power of 2 or 6 x 6)
    printf("%f", abs(123456789)); // absolute value

    // others:
    /*
        Function	Description
        acos(x)	Returns the arccosine of x
        asin(x)	Returns the arcsine of x
        atan(x)	Returns the arctangent of x
        cbrt(x)	Returns the cube root of x
        cos(x)	Returns the cosine of x
        exp(x)	Returns the value of Ex
        sin(x)	Returns the sine of x (x is in radians)
        tan(x)	Returns the tangent of an angle
    */

   getchar(); // allow us to read the console
    
    return 0;
}