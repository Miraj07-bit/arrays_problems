

#include <stdio.h>

int main() {

    int n,i;
    printf("enter the element of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int second_largest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    printf(" second largest element is :%d\n",second_largest);


    
    return 0;
}