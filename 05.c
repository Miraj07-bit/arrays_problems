// write a  C program to multiply all even numbers of an array. 
#include <stdio.h>
int main()
{
    int n, i, product = 1;
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
        if(a[i] % 2 == 0)
        {
            product *= a[i];
        }
    }

    printf("Product of even numbers in the array is: %d\n", product);
    return 0;
}
