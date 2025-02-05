#include<stdio.h>
int main(){
  int limit,number,largest,smallest,i;
  printf("Enter the size of elements");
  scanf("%d",&limit);
  int num[limit];
  printf("Enter the numbers");
  for(i=0;i<limit;i++){
    scanf("%d",&num[i]);
  }
  int maxPosition;
  int minPosition;
  largest=num[0];
  smallest=num[0];
  maxPosition=1;
  minPosition=1;
  for (i=0;i<limit;i++){
    if(num[i]>largest){
      largest=num[i];
      maxPosition=i+1;
    }if(num[i]<smallest){
      smallest=num[i];
      minPosition=i+1;
    }
  }
  printf("\n The largest number is %d",largest);
  printf("\n The smallest number is %d",smallest);
  printf("\n The position of largest number is %d ",maxPosition);
  printf("\n The position of smallest number is %d",minPosition);
  return 0;
}
