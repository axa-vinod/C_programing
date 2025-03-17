//
Aksa Vinod
17-03-2025
Write a c program that defines a function multiply() which takes two integers as parameters and return their product. Call this fun in main() and display the result.
//
#include<stdio.h>
void multiply(int,int);
int main(){
   int n1,n2;
   printf ("Enter two numbers");
   scanf("%d %d",&n1,&n2);
   multiply(n1,n2);
   return 0;
}
void multiply(int n1,int n2){
      int mult=n1*n2;
      printf("The product of two numbers is %d",mult);
}
