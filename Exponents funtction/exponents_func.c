#include <stdio.h>

float exponent(float x, int n) {
    float result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    float x, solution;
    int n;

    printf("Enter a base (x): ");
    scanf("%f", &x);
    printf("Enter an exponent (n): ");
    scanf("%d", &n);

    solution = exponent(x, n);
    printf("%.2f to the power of %d is %.2f\n", x, n, solution);
    return 0;
}

