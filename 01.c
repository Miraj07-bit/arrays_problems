// Write a C program to delete an element from a given position in an array.

#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the element of an array:");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d no index value:",i);
        scanf("%d",&a[i]);
    }
    
    int pos;
    printf("Enter the index number for delete element:");
    scanf("%d",&pos);
    for(i=pos;i<(n-1);i++){
        a[i]=a[i+1];
    }
    n--;
    printf("UPdated array is :\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    printf("\n");
    return 0;

}