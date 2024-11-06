#include <stdio.h>
void main()
{
    int a[3][3], transposed[3][3], i, j;
    printf("Enter matrix elements : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transposed[j][i] = a[i][j]; // Swap indices
        }
    }

    // Display the transposed matrix
    printf("Transposed Matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }
}
