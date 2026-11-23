//  Write a program to find the sum of all elements of a 3×3 matrix.
#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[3][3];
    printf("Enter the elements of the 3x3 matrix: ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    printf("The sum of all elements of the matrix is: %d\n", sum);
    return 0;
}
