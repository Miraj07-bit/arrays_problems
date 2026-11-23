// write a C program to divide all even/odd numbers of an array.
#include <stdio.h>
int main()
{
    int n, i, dividend, divisor;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("Even number %d divided by %d is %d\n", a[i], divisor, dividend / divisor);
        }
        else
        {
            printf("Odd number %d divided by %d is %d\n", a[i], divisor, dividend / divisor);
        }
    }

    return 0;
}
