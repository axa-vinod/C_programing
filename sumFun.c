/**
Create a program to calculate the sum of array elements by passing the array to a function. Display the sum in the main function.
Aksa Vinod
**/
#include<stdio.h>
int sumOf(int array[],int size){
     int sum=0;
     for(int i=0;i<size;i++){
       sum=sum+array[i];
   }
   return sum;
}
int main(){
   int n,sum;
   printf("Enter the size of array");
   scanf("%d",&n);
   int array[n];
   printf("Enter the %d number of elements",n);
   for(int i=0;i<n;i++){
      scanf("%d",&array[i]);
   }
   sum=sumOf(array,n);
   printf("%d",sum);
   return 0;
   
}
