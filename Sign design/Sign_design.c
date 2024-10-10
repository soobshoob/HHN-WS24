#include <stdio.h> //Sing desingn

int main()
{
    float num;
    printf("Please type a number: ");
    scanf("%f", &num);
    if(num>0){
        printf("Positive number\n");
    }
    else if(num<0){
        printf("Negative number\n");
    }
    else{
        printf("The number is 0");
    }
    return 0;
}