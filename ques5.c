//Write a C program to find the sum of all elements of the array.
#include<stdio.h>

int main()
{
    int arr[100],size,i,sum=0;

    printf("Enter the array size");
    scanf("%d",&size);

    printf("Enter the array element");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

       for(i = 0; i < size; i++)
          sum = sum + arr[i]; 

printf("Sum of the array = %d\n",sum);
    
 
}


    

