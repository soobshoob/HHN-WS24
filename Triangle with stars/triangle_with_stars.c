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
void printing(int n) {
    for (int i = 1; i <= n; i++) {
        //counting the number of spaces to center triangle
        for (int j = 1; j <= n - i; j++) {
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
    int n;
    printf("Enter the number of rows: ");
    //checking input
    if(scanf("%d", &n) != 1 || n <= 0){
        printf("Error: Invalid input.\n");
        return 1;
    }
    separator();

    printing(n);

    separator();
    
    //waiting for press before clossing program
    while(getchar()!='\n');
    getchar();

    return 0;
}