// this program is to print the diagonal sum of a square matrix
#include <stdio.h>
#define MAX 100
int main() {
    int matrix[MAX][MAX];
    int n, i, j;
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sums of the diagonals
    for (i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    // Print the results
    printf("Primary Diagonal Sum: %d\n", primaryDiagonalSum);
    printf("Secondary Diagonal Sum: %d\n", secondaryDiagonalSum);

    return 0;
}