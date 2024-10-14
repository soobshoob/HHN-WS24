#include <stdio.h>

int main()
{
    int a, b=1, c=0, f=0;
    printf("Please type the number of Fibonacci numbers to be displayed: ");
    scanf("%d", &a);
    if(a>=0){
        printf("Your section of the Fibonacci sequence is: ");
        for (int i=0; i<a; i++){
            if (i==0){
            printf("0 ");
            }
            else if(i==1){
            printf("1 ");
            }
            else{
                f=b+c;
                c=b;
                b=f;
                printf("%d ", f);
            }
        }
    }  
    else{
        printf("Only number from 1, please");
    }
        
    return 0;
}