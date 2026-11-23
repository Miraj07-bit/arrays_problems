// write a C program to sum all the odd number of an array. 
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }

    printf("Sum of odd numbers in the array is: %d\n", sum);
    return 0;
}
