#include <stdio.h>

int main() {
    int n, count = 0, number = 2;

    printf("Please enter the number of prime numbers to be displayed: ");
    scanf("%d", &n);

    printf("The first %d prime numbers are: ", n);

    while (count < n) {
        int isPrime = 1; // is number prime?

        // Check if number can be devided by another number
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; // Number is not prime
                break; //quiting the circle
            }
        }

        if (isPrime) { // If number is prime - we print it
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
    return 0;
}
