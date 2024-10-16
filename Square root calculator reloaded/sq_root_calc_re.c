#include <stdio.h>

int check(float n)
{
    int chk=1;
    if(n<0){
        printf("Error: number %.4f can not be accepted.\n", n);
    }
    else{
        chk=0;
    }
    return chk;
}

float root(float n)
{
    float a,b, mid;
    a=0;
    b=(n>=1)?n:1;
    while (b-a>=0.0001){
        mid=(a+b)/2;
        if(mid*mid>n){
            b=mid;
        }
        else {
            a=mid;
        }
    }
    return mid;
}

int main(void)
{
    float n, s;
    int chk=1;
    while(chk){
        printf("What is the number whose square  root is to be calculated: ");
        scanf("%f", &n);
        chk=check(n);
    }
    s=root(n);
    printf("The root of %.4f is %.4f\n", n, s);
    return 0;
}