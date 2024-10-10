#include <stdio.h>//Mark calrulator (updated)

int main()
{
    int sc;
    for (int i=0; i!=1; ){
        printf("Please enter your score: ");
        scanf("%d", &sc);
        if(sc>=101){
            printf("The score must be berween 0-100.\n");
        }
        else if (sc<0){
            printf("The score must be berween 0-100.\n");
        }
        else {
            i=1;
        }
    }
    if(sc>=91){
        printf("Cangratulation! You have passed with grade 1.0");
    }
    else if(sc>=77 & sc<=90){
        printf("Cangratulation! You have passed with grade 2.0");
    }
    else if(sc>=57 & sc<=76){
        printf("Cangratulation! You have passed with grade 3.0");
    }
    else if(sc>=45 & sc<=56){
        printf("Cangratulation! Ypu have passed with grade 4.0");
    }
    else {
        printf("Unfortunately, you  didn't pass.");
    }
    return 0;
}