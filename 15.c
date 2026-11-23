// Write a C programme to find the difference between the largest and smallest elements of an array.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    int difference = largest - smallest;
    printf("The difference between the largest and smallest elements is: %d\n", difference);

    return 0;
}