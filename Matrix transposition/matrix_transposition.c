#include <stdio.h>

// Display the horizontal line separating the matrices
void separator() {
    printf("\n");
    for (int i=0; i<60; i++) {
        printf("=");
    }
    printf("\n\n");
}

// Function to perform matrix transposition
void count(float arr1[][3], float res[][3], int rows, int cols)
{
    for(int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            res[i][j] = arr1[j][i];
        }
    }
}


// Function to display the result of martix transposition
void result_out(float arr1[][3], float res[][3], int rows, int cols) {
    
    separator();

    for (int i = 0; i < rows; i++) {
        // Display the first matrix
        printf("[");
        for (int j = 0; j < cols; j++) {
            printf(" %.2f", arr1[i][j]);
        }
        printf(" ] ");

        // Display the equals sign only for the second row
        if (i == 1) {
            printf("=");
        } else {
            printf(" ");
        }

        // Display the resulting matrix
        printf(" [");
        for (int j = 0; j < cols; j++) {
            printf(" %.2f", res[i][j]);
        }
        printf(" ]\n");
    }

    separator();

    printf("\nMade by soobshoob(^_^)\n\n");
}

int main(void)
{
    // Define the size of the matrices
    const int rows = 3;
    const int cols = 3;

    float arr1[rows][cols], res[rows][cols];

    // Input elements of the first matrix
    printf("Enter 1st array: \n");
    for (int i = 0; i < rows; i++) {
        printf("Enter %d line: \n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Enter %d number: ", j + 1);
            while (scanf("%f", &arr1[i][j]) != 1) { // Checking if the input is valid
                printf("Invalid input. Please enter a valid number: ");
                while (getchar() != '\n'); // Clearing the input buffer
            }
        }
    }

    // Call the function to perform matrix transposition
    count(arr1, res, rows, cols);

    // Call the function to display the result
    result_out(arr1, res, rows, cols);

    return 0;
}
