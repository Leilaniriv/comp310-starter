#include <stdio.h>
#define row 2
#define columns 2


int main (int argc, char** argv)
{
    int matrix1[rows][columns] = {{1, 2}, {3, 4}};
    int matrix2[rows][columns] = {{5, 6}, {7, 8}};

    int sum[rows][columns];
    addMatrices(matrix1, matrix2, sum);
    int product[rows][columns];
    multiplyMatrices(matrix1, matrix2, product);

    printf("Matrix Addition: \n");
    printMatrix(sum);
    printf("Matrix Multiplication: \n");
    printMatrix(product);

    return 0;
}

int addMatrices(int a[rows][columns], int b[rows][columns], int sum[rows][columns])
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int multiplyMatrices(int a[rows][columns], int b[rows][columns], int product[rows][columns])
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            for (int k = 0; k < a[0].length; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int printMatrix(int matrix[rows][columns])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf(" \n");
}