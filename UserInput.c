#include <stdio.h>

int main () {

    char s_input[] = "";

    printf("What is your name? \n");
    scanf("%s", &s_input); // store the user's input as a string

    printf("Nice to mee you, %s !", s_input);

    return 0;
}