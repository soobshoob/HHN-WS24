#include <stdio.h>

int main()
{
    int a=0, n, i=1;
    while (i){
        printf("What is the number to be summed up to: ");
        scanf("%d", &n);
        if(n>=0){
            i=0;
        }
        else{
            printf("Please enter a positive number.\n");
        }
    }
    int counter=1;
    while(counter<=n){
        a=a+counter;
        counter++;
    }
    printf("The sum from 0 to %d is %d", n, a);
        
    return 0;
}