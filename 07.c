// Write a C program to find the maximum and minimum elements in an array. 
#include <stdio.h>
int main()
{
    int n,i;
    int max, min;

    printf("Enter the number of element of array:");
    scanf("%d",&n);

    int arr[n];
    for(int i =0;i<n;i++){

        printf("Enter the %d no index :",i);
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1;i<n;i++){

        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }

    }

    printf("Maximum element is:%d\n",max);
    printf("Minimum element is:%d\n",min);


}
