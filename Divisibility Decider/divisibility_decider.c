#include <stdio.h>//Divisibility decider + some other task idk

int main()
{
    int num1, num2;
    printf("Please type the numerator: ");
    scanf("%d", &num1);
    printf("Please type the donominator: ");
    scanf("%d", &num2);
    if (num2==0){
        printf ("The donominator should not equals 0, try again :)");
    }
    else if(num1%num2>0){
        printf("%d isn't divided by %d to an integer\n", num1, num2);
    }
    else{
        printf("%d is divided by %d to an integer and the result is %d", num1, num2, num1/num2);
    }
    return 0;
}