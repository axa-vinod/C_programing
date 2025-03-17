//Aksa Vinod
17-03-2025
Write a c program with function that named isEven() that takes an integer as input and return 1 if the no is even,otherwise return 0. Use this fun in main() to check whether a given number is even or odd.
//
#include<stdio.h>
int isEven(int);
int main(){
   int num;
   printf("Enter the number");
   scanf("%d",&num);
   isEven(num);
   if(isEven(num)==1){
      printf("This number is Even");
   }else{
      printf("This number is Odd");
   }
}
int isEven(int num){
     if(num%2==0){
        return 1;
     }else{
        return 0;
     }
}
