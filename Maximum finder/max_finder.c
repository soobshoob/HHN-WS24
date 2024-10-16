#include <stdio.h>

int max_count(int cas[], int size) //Here we are looking for the biggest number out of array cas[], int size is a size of array from main function
{
    int max=cas[0];
    for (int j=0; j<=size; j++){
        if (cas[j]>max){
            max=cas[j];
        }
    }
    return max;
}

int main(void)
{
    int size=0;
    int cas[6];

    printf("Enter 6 numbers one by one from wich the maxinun number will be calculated.\n");
    while(1){
        printf("Enter %dst number: ", size+1);
        scanf("%d", &cas[size]);
        if(size+1==6){
            break;
        }
        size++;
    }
    printf("max{");
    for (int g=0; g<=size; g++){
        if(g<5){
            printf("%d, ", cas[g]);
        }
        else{
            printf("%d", cas[g]);
        }
    }
    printf("} = %d", max_count(cas, size));
    return 0;
}