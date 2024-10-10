#include <stdio.h> //Panel game

int main()
{
    int an1, num=4;
    printf("Please think about a number between 1 and 8(included).\nAnswer the following questions with 1 (yes) or 0 (no).\n");
    for (int ii=0; ii<3; ii++){
        for (int i=0; i<1; ){
            printf("Is the number bigger then %d? ", num);
            scanf("%d", &an1);
            if (an1!=1 && an1!=0){
                printf("Please answer only with 1 or 0\n");
            }
            else {
                i=1;
            }
        }
        if(ii<1){
            if(an1==1){
                num=num+2;
            }
            else {
                num=num-2;
            }
        }
        else {
            if(an1==1){
                num=num+1;
            }
            else {
                num=num-1;
            }
        }
            
    }
    printf("You have thought about %d.\n", num);    
    return 0;
}