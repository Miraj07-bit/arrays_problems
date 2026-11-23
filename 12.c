//  Find the average of n floating-point numbers stored in an array
#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float a[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    average = sum / n;
    printf("The average of the elements is: %.2f\n", average);
    return 0;
}