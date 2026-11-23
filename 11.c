// Write a C program to declare an integer array of size 5, store the values 10, 20, 30, 40, 50 in it, and print all the elements using a for loop.
#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}