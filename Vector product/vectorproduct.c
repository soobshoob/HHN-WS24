#include <stdio.h>

// Calculates the dot product of two vectors
float m_count(float vectors[][3]) 
{
    float res = 0;
    for (int i = 0; i < 3; i++) {
        res += vectors[0][i] * vectors[1][i];
    }
    return res;
}

// Formatted output of vectors and their dot product
void out(float vectors[][3], float res) 
{
    printf("[");
    for (int i = 0; i < 3; i++) {
        printf(" %.2f", vectors[0][i]);
        if (i < 2) {
            printf(";");
        }
    }
    printf("] * [");
    for (int i = 0; i < 3; i++) {
        printf(" %.2f", vectors[1][i]);
        if (i < 2) {
            printf(";");
        }
    }
    printf("] = %.2f", res);
}

int main(void)
{
    float vectors[2][3]; // Array for the coordinates of two vectors

    // Input coordinates for two vectors
    printf("Enter vector coordinates in order (x, y, z).\n");
    for (int i = 0; i < 2; i++) {
        printf("Enter coordinates for vector %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Enter %d coordinate: ", j + 1);
            scanf("%f", &vectors[i][j]);
        }
    }

    // Calculate and output the dot product
    float res = m_count(vectors);
    out(vectors, res);

    return 0; // End of the program
}
