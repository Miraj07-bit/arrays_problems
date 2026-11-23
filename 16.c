// Write a C programme to swap the middle two elements of an array. 
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

    // Swap the middle two elements
    if (n >= 2) {
        int temp = arr[n/2 - 1];
        arr[n/2 - 1] = arr[n/2];
        arr[n/2] = temp;
    }

    printf("Array after swapping the middle two elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}