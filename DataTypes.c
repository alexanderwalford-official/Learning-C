#include <stdio.h>

int main () {

    int myNum = 34242;
    float myFloat = 1.2345678; // limit of 7 decimal digits
    double myDouble = 1.234567890; // limit of 15 decimal digits
    char myChar = 'A';

    // did you notice the lack of a string variable?
    // in C++, this is an class reference and isn't in standard C

    // intead, we must define strings alone as an array of chars:
    char myString[] = "My name is Jeff!";

    // however, instead of referencing it as a char in a printf call we must
    // instead always use %s (instead of %c)

    // print the data type values
    printf("\n\nExample Data Type Values: %d, %f, %c, %s \n", myNum, myFloat, myChar, myString);

    // perhaps we need to define a constant? (can't be overwritten)
    const i_num = 3543;
    int i_2 = 23423;
    int answer = i_num + i_2; // sum the 2 integers

    printf("%d + %d = %d \n", i_num, i_2, answer); // print multiple of the same data type in a singular line

    return 0;
}