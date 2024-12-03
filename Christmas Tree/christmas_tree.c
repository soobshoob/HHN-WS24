#include <stdio.h>

// Simple separator
void separator() {
    printf("\n");
    for (int i = 0; i < 60; i++) {
        printf("=");
    }
    printf("\n\n");
}

// Function to print the Christmas tree
void printing(int height) {
    int base_layer_height = 4;  // Height of the first layer
    int total_layers = (height - base_layer_height) / 3 + 1;  // Total number of layers
    int max_width = 1;  // Starting with one star for the first layer

    // Find the maximum width of the tree
    for (int layer = 1; layer <= total_layers; layer++) {
        max_width += (base_layer_height + layer - 1) * 2 - 1;
    }

    // Print layers
    int current_width = 1;  // Initial width of the topmost layer
    for (int layer = 1; layer <= total_layers; layer++) {
        int layer_height = base_layer_height + layer - 1;  // Height of the current layer
        for (int row = 0; row < layer_height; row++) {
            int stars = current_width + row * 2;  // Stars grow by 2 for each row
            int spaces = (max_width - stars) / 2;  // Center stars

            // Print spaces
            for (int s = 0; s < spaces; s++) {
                printf(" ");
            }

            // Print stars
            for (int s = 0; s < stars; s++) {
                printf("*");
            }

            printf("\n");
        }
        // Update the starting width for the next layer
        current_width += layer_height * 2 / 3;  // 2/3 of the final row's width of the current layer
    }

    // Print the trunk
    int trunk_height = height / 10;  // Trunk height proportional to the tree height
    int trunk_width = total_layers;  // Trunk width proportional to the number of layers
    int trunk_spaces = (max_width - trunk_width) / 2;

    for (int t = 0; t < trunk_height; t++) {
        for (int s = 0; s < trunk_spaces; s++) {
            printf(" ");
        }

        for (int s = 0; s < trunk_width; s++) {
            printf("|");
        }

        printf("\n");
    }
}

// Main function
int main() {
    // Initialize variables
    int height;
    printf("Enter the height of your Christmas tree (minimum 15): ");

    // Check input
    if (scanf("%d", &height) != 1 || height < 15) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    separator();

    printing(height);

    separator();

    // Wait for press before closing the program
    while (getchar() != '\n');
    getchar();

    return 0;
}
