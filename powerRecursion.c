/**
Write a program to calculate the power of a number using recursion. The base and exponent should be taken as input from the user.
Aksa Vinod
**/
#include<stdio.h>
int power(int base,int expo){
   if(expo==0){
      return 1;
   }else{
       return base*power(base,expo-1);
   }  
}
int main(){
    int base,expo,i;
    printf("Enter the base number");
    scanf("%d",&base);
    printf("Enter the exponent number");
    scanf("%d",&expo);
    printf("Power = %d",power(base,expo));
    return 0;
    
}
