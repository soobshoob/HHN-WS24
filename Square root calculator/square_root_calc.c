#include <stdio.h>

int main()
{
    float a, b, x, mid;
    int i=1;
    while(i){
        printf("What is the number whose square root is to be calculated: ");
        scanf("%f", &x);
        if(x<0){
            printf("Error: Square root of a negative number is not defined in real numbers.\n");

        }
        else {
            break;
        }
    }
    a=0;
    b=(x>=1)?x:1;
    while (b-a>=0.000001){
        mid=(a+b)/2.0;
        if(mid*mid>x){
            b=mid;
        }
        else{
            a=mid;
        }
    }
    printf("The square root of %7.4f is %7.4f", x, mid);
    return 0;
}