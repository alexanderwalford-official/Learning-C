#include <stdio.h>
// multi-dimensional array that has 5 constant values contains page identifiers
const char* PageNamesAndIDs[5][5] = {{"Home", "About Us", "Our Apps", "Contact", "Other"}, {"index.html", "about.html", "apps.html", "contact.html", "more.html"}};
const int PageCounts[] = {2, 4, 5, 11, 9};

int main () {

    /*
        Task:
        Build an admin CLI that can report back statistics about website views
        and which pages are the most popular.
    */

   printf("\n");
   printf("Open Website Statistics Tool\n");
   printf("Alexander Walford 2022\n");
   printf("\n");
   printf("\n");
   printf("Please select an option from below:\n");
   printf("\n");
   printf("0) Print all page views, in ascending order.\n");
   printf("1) Enter a specific page ID to show how many views it has.\n");
   printf("2) Create new data structure containing page views and their respective IDs.\n");
   printf("\n");
   char input = scanf(">");
   (input == 0) ? getallviews() : (input == 1) ? getspecificview : (input == 2) ? newview() : err("Invalid menu option!");
}

void getallviews() {
    printf("All page data, in ascending order using linear sort:\n");

    // linear sort algorithm
    
}

void getspecificview() {
    printf("\n");
    printf("Please enter the page ID:\n");
    char* page = scanf("> ");
    int i;
    for (i < sizeof(PageCounts); i++;) {
        (page == PageNamesAndIDs[i]) ? printpagedata(i) : main();
    }
}

void printpagedata(int id) {
    printf("Page Name & ID:");
    printf(PageNamesAndIDs[id][id]);
    printf("\n\nPage Views:");
    printf(PageCounts[id]);
    main();
}

void newview() {

}

void err(char* error) {
    printf(error);
    scanf("Hit enter to continue..");
    main();
}