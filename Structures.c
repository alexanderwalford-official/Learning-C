#include <stdio.h>

struct myStruct
{
    int myInt;
    double myDouble;
    char myChar;
    char myString[];
};


int main () {
    
    // first, create a local version of the structure in memory for reference
    struct myStruct struct_1; // you should probably name it something shorter but still readable

    // assign values
    struct_1.myInt = 23424;
    struct_1.myDouble = 213424;
    struct_1.myChar = 'D';

    // here's a problem:
    // struct_1.myString = "Hello!";
    // doesn't work with structures, so we have to use:

    strcpy(struct_1.myString, "Hello!");


    // print the values from the local memory structure
    printf("%d, %d, %c\n", struct_1.myInt, struct_1.myDouble, struct_1.myChar);


    // one of the great things about structures is copying them and all their values:
    struct myStruct struct_2; // define new local memory referance instance 
    struct_2 = struct_1; // copy the values

    return 0;
}