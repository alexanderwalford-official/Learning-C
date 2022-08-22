#include <stdio.h>

struct Customer {
    char* name;
    char* postcode;
    int age;
};

void browse() {
    // example of a multi-dimensional string array, containing our item names and stock
    // (notice the *) 10 is the length of the char array value, not the 
    // length of the entire array
    const char *items[10][10] = {{"Milk", "Cheese", "Chocolate Bar", "250G Sugar", "Red Apple", "Tea Bags"}, {"24", "32", "52", "42", "87", "64"}};
    printf("\n");
    printf("Items Currently In Stock: \n");
    printf("NAME            STOCK\n");
    printf("%s              %s", items[0], items[1]);
    printf("\n");
    getchar();
}

void basket () {
    
}

void details () {


}

void error() {
    printf("Please enter a valid choice! \n");
    getchar();
}

int main () {
    char input[] = "";

    printf("Welcome to the shopping app! Please select an option from below: \n");
    printf("\n");
    printf("0 - BROWSE PRODUCTS\n");
    printf("1 - SHOPPING BASKET\n");
    printf("2 - SET CUSTOMER DETAILS\n");
    printf("\n");
    scanf("%s", input);

    (input == "0") ? browse() : (input == "1") ? basket() : (input == "2") ? details() : error();

    return 0;
}
