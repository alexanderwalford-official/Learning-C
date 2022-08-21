#include <stdio.h>

int main () {

    // get the memory address of a variable:
    int myInt = 24325252;
    printf("%p", &myInt); // prints the memory address

    // let's say our program needs to use the least amount of memory possible
    // a good solution to this problem is to free memory when we're done with it

    int TwoTimesTable[] = {2, 4, 6, 8, 10, 12 , 14, 16, 18, 20}; // define in memory

    printf("%d", TwoTimesTable); // complete the relevant function

    free(TwoTimesTable); // remove from memory

    // we can also do more with memory management such as re-allocating it and declaring the use
    // of a specific amount of it to prevent our program using more memory than intended

    // let's start by creating an array of a length of 10 values
    int MyArray[10];

    // now, let's say that we need to re-size the length of the array and don't want to assign
    // a new memory address (which would use more memory and be much slower)

    realloc(MyArray, 20); // change the length of the array from 10 to 20

    return 0;
}