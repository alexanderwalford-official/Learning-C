#include <stdio.h>

struct Customer {
    char* name;
    char* postcode;
    int age;
};

char* basket[];
int basketpricevalues[];
const char *items[10][10] = {{"Milk", "Cheese", "Chocolate Bar", "250G Sugar", "Red Apple", "Tea Bags"}, {"24", "32", "52", "42", "87", "64"}};
struct Customer c1;

void browse() {
    /* 
        Example of a multi-dimensional string array, containing our item names
        and stock (notice the *) 10 is the length of the char array value, not 
        the length of the entire array. 
    */

    printf("\n");
    printf("Items Currently In Stock: \n");
    printf("NAME            STOCK\n");
    printf("%s              %s", items[0], items[1]);
    printf("\n");
    getchar();
}

void basket () {
    int i; // localised pointer
    int total = 0;
    printf("\n");
    printf("%s's Shopping Basket\n", c1.name);
    printf("\n");
    printf("ROW      ITEM NAME      COST\n");
    for (i < basket.len ; ++i) {
        printf("#%d     %s      %d\n", i, basket[i], basketpricevalues[i]);
        total = total + basketpricevalues[i]; 
    }
    printf("\n");
    printf("TOTAL: £%d\n", total);
    getchar();
    main();
}

void details () {
    if (c1.name == NULL) {
        printf("\n");
        printf("What is your name?\n");
        scanf("%s", c1.name);
        printf("What is your postcode?\n");
        scanf("%s", c1.postcode);
        printf("How old are you?\n");
        scanf("%d", c1.age);
    }
    else {
        printf("\n");
        printf("Found existing customer details:\n");
        printf("Name: %s\n", c1.name);
        printf("Postcode: %s\n", c1.postcode);
        printf("Age: %d\n", c1.age);
        printf("\n");
        printf("Would you like to remove your details? (Y/N)\n");
        char reply;
        scanf("%c", reply);
        (reply == "Y") ? free(c1) : 0;
        printf("Your details have been removed.\n");
    }
    getchar();
    main();
}

void error() {
    printf("Please enter a valid choice! \n");
    getchar();
    main();
}

int main () {
    char input[] = "";

    printf("Welcome to the shopping app! Please select an option from below: \n");
    printf("\n");
    printf("0 - BROWSE PRODUCTS\n");
    printf("1 - SHOPPING BASKET\n");
    printf("2 - SET/GET CUSTOMER DETAILS\n");
    printf("\n");
    scanf("%s", input);

    (input == "0") ? browse() : (input == "1") ? basket() : (input == "2") ? details() : error();

    return 0;
}