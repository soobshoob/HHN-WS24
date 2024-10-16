#include <stdio.h> /*prime counter function reloaded*/

int isprime(int a){
    int count =0, pr=2;
    while (count < a) {
        int isPrime = 1; // Flag, means that number is prime
        for (int j = 2; j * j <= pr; j++) {
            if (pr % j == 0) {
                isPrime = 0; // number is not prime
                break; // Exiting cycle
            }
        }
        if (isPrime) {
            printf("%d ", pr);
            count++; // +1 to prime numbers counter
        }
        pr++; // Move to next number
    }
    return 0;
}

int main()
{
    int a, g=1;
    while (g){ //continue program till the moment it is canceled
    printf("Please enter the number of prime numbers to be displayed: ");
    scanf("%d", &a); //ask for number of prime numbers
    printf("The first %d prime numbers are: ", a);
    isprime(a);
    int j=1;
    while (j){ // check for answer
        printf("\nWould you like to continue? 1 (yes) 0 (no)\n");
        scanf("%d", &g); // ask for the answer
        if (g>1 | g<0){
            printf("Error: wrong syntax"); //Error message
        }
        else {
            break; //answer accepted
        }
    }
    printf("\n");
    }
    return 0;
}