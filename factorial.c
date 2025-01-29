#include <stdio.h>
int main(){
  int num,fact;
  printf("Enter a number");
  scanf(" %d",&num);
  fact=1;
  if(num>0){
      while(num>0){
      fact=fact*num;
      num-=1;
      }
      printf("%d",fact);
  }else{ 
      printf("Enter a positive number");
   }
   return 0;
}
