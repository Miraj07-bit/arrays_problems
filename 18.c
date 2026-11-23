// Write a C program to find the sum of the main diagonal elements of a 3×3 matrix.
#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum = 0;
    int i, j;

    printf("Enter the elements of the 3×3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the main diagonal elements
    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}