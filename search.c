#include<stdio.h>
int main(){
  int item,limit,i;
  printf("Enter the number of elements");
  scanf(" %d", &limit);
  int array[limit];
  printf("Enter the %d numbers",limit);
  for(i==0;i<limit;i++){
     scanf("%d",&array[i]);
  }
  printf("Enter the number to be searched");
  scanf(" %d",&item);
  for(i=0;i<limit;i++){
    if(item==array[i]){
       printf("The given element found at position %d",i+1);
    }
  }
  return 0;
}
