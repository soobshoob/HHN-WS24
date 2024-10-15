#include <stdio.h>

int main()
{
    int low=1, high=1023, ans, mid;
    printf("Consider an integer number between 1 and 1024.\n");
    printf("Answer the following questions with 1 (yes) or 0 (no).\n");
    for (int i=0; i<10; i++){
        mid=(low+high)/2;
        printf("Is your number greater than %d? ", mid);
        scanf("%d", &ans);
        if (ans==1){
            low=mid+1;
        }
        else if (ans==0){
            high=mid;
        }
        else {
            printf("Please answer only 1 or 0.");
            i--;
        }

    }
    printf("You have thought about the number %d.\n", low);
    return 0;
}