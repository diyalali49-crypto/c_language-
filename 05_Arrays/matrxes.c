#include <stdio.h>

void input(int arr[][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
}

void display(int arr[][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}

// Matrix Addition
void add(int a[][10], int b[][10], int r, int c) {
    printf("\nMatrix Addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d", a[i][j] + b[i][j]);
        printf("\n");
    }
}

// Matrix Transpose
void transpose(int arr[][10], int r, int c) {
    printf("\nTranspose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%4d", arr[j][i]);
        printf("\n");
    }
}

// Matrix Multiplication
void multiply(int a[][10], int b[][10], int r1, int c1, int c2) {
    int result[10][10] = {0};
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("\nMatrix Multiplication:\n");
    display(result, r1, c2);
}

int main() {
    int a[10][10], b[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter Matrix A:\n");
    input(a, r, c);

    printf("\nEnter Matrix B:\n");
    input(b, r, c);

    printf("\nMatrix A:\n");
    display(a, r, c);

    printf("\nMatrix B:\n");
    display(b, r, c);

    add(a, b, r, c);
    transpose(a, r, c);
    multiply(a, b, r, c, c);  // square matrix multiplication

    return 0;
}