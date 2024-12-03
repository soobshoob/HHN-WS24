#include <stdio.h>

//simple separator
void separator() {
    printf("\n");
    for (int i = 0; i < 60; i++) {
        printf("=");
    }
    printf("\n\n");
}

//printing triangle
void printing(int rows, int number_of_stars, int insertions) {
    for (int i = number_of_stars; i <= rows; i++) {
        //inserting the nessecary number of insertions
        for (int j = 1; j <= insertions; j++) {
            printf(" ");
        }
        //counting the number of spaces to center triangle
        for (int j = 1; j <= rows- i; j++) {
            printf(" ");
        }

        //printing stars
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");

    }
}

//main function
int main() 
{
    //initializing variables
    int rows, number_of_stars, insetrions;
    printf("Enter the number of rows: ");
    //checking input
    if(scanf("%d", &rows) != 1 || rows<= 0){
        printf("Error: Invalid input.\n");
        return 1;
    }
    printf("Enter the number of stars in first row: ");
    //checking input
    if(scanf("%d", &number_of_stars) != 1 || number_of_stars<= 0){
        printf("Error: Invalid input.\n");
        return 1;
    }
    printf("Enter the number of insertions: ");
    //checking input
    if(scanf("%d", &insetrions) != 1 || insetrions<= 0){
        printf("Error: Invalid input.\n");
        return 1;
    }
    separator();

    printing(rows, number_of_stars, insetrions);

    separator();
    
    //waiting for press before clossing program
    while(getchar()!='\n');
    getchar();

    return 0;
}