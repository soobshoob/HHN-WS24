#include <stdio.h>
#include <math.h>

// Function to display the horizontal line
void separator()
{
    printf("\n");
    for(int i = 0; i < 60; i++)
    printf("=");
    printf("\n\n");
}

// Function to calculate the standard deviation
float calculate_standard_deviation(float arr[], int n, float sum) {
    // Calculate the mean (average) of the elements
    float mean = sum / n;
    float square_sum = 0;

    // Loop to calculate the sum of squared deviations
    for (int i = 0; i < n; i++) {
        square_sum += pow(arr[i] - mean, 2); // (x - mean)^2
    }

    // Calculate the standard deviation
    float standard_deviation = sqrt(square_sum / (n - 1));

    return standard_deviation;
}

// Main function to get the elements from the user
int main() {
    int n;
    float sum = 0;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Array declaration to hold the elements
    float arr[n];

    // Loop to get elements from the user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);

        // Input validation loop
        while (scanf("%f", &arr[i]) != 1) {
            printf("Invalid input. Please enter a valid number: ");
            while (getchar() != '\n'); // Clear the input buffer
        }
        sum += arr[i]; // Add the elements to the sum
    }

    // Display the result
    separator();
    printf("Standard deviation: %.2f\n", calculate_standard_deviation(arr, n, sum));
    separator();
    printf("Made by soobshoob(^_^)\n");
    return 0;
}
