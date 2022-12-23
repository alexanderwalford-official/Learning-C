/*
    A simple random number generator that generates
    26 different numbers of a length of 8.
*/

#include <stdio.h>
#include <stdlib.h>

int nums[25];
int lc = 0;
int lowest = 100;
int highest = 999;

int main () {
    if (lc < 25) {
        int num = rand() % (highest + 1 - lowest) + lowest; // random number between 1000000 and 10000000
        for (int lc2 = 0; sizeof(nums) < lc2, lc2++;) { // iterate through the array
            if (num == nums[lc2]) {
                // number is already in array
                printf("%d (duplicate)\n", num);
                getchar();
                main();
            }
        }

        printf("%d\n", num);
        lc++;
        main();
    }
    else {
        getchar();
    }
    return 0;
}