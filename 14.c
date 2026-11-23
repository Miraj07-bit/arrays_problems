// Write a C program to count total even and odd numbers in an array. 
#include <stdio.h>
int main()
{
    int n,i;
    int even=0,odd=0;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){

       
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){

        if(a[i]%2==0){

            even++;
        }
        else{

            odd++;
        }
        
    }
    
    printf("Total even numbers: %d\n",even);
    printf("Total odd numbers: %d\n",odd);
    return 0;




    
}