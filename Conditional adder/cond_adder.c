#include <stdio.h>

int main()
{
    int n, i=1, a=0;
    while (i){
        printf("What is the number to be summed up to: ");
        scanf("%d", &n);
        if (n<0){
            printf("Error 40\nEnter positive number n>=0.\n");
        }
        else {
            i--;
        }
    }
    int count=0;
    while(count<=n){
        if(count%2==0 | count%3==0){
            a+=count;
        }
        count++;
    }
    printf("The sum of the numbers from 0 to %d divisible by 2 or 3 is %d.", n, a);
    return 0;
}