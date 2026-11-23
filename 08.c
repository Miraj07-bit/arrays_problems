// Write a C program to reverse the elements of an array. 

#include <stdio.h>
int main()
{
    int n,i;
    int first,second;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){

        printf("Enter the %d no index:",i);
        scanf("%d",&a[i]);
    }

    printf("Original array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0;i<(n/2);i++){

        first= a[i];
        second = a[n-i-1];

        a[n-i-1]=first;
        a[i]=second;


    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
