//  Write a C program to sort array elements in ascending order.
#include <stdio.h>
int main()
{
   int n,i,j;
   int temp;
   printf("number of elements:");
   scanf("%d", &n);

   int a[n];
   
   printf("Enter the elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }

   printf("sorted elements are:\n");
   for(i=0;i<n;i++){
    printf("%d\n",a[i]);
   }
   printf("\n");
   return 0;

}
