// Write a C program to print a matrix element.
#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
