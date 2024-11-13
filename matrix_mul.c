// 2. Multiplication of two matrices.

#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    printf("Enter matrix A elements : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix B elements : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix A : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    printf("Matrix A * B : \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0; // Initialize the element
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j]; // Dot product
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}