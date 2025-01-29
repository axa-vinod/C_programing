#include <stdio.h>
int main(){
  int maths,physics,chemistry,total;
  printf("Enter your physics mark");
  scanf("%d",&physics);
  printf("Enter your chemistry mark");
  scanf("%d",&chemistry);
  printf("Enter your maths mark");
  scanf("%d",&maths);
  total=maths+physics+chemistry;
  printf("%d is the total mark obtained",total);
  if (total>=190){
    printf("\n You are eligible for admission");
  }else if(physics+maths>=140){
    printf("\n You are eligible for admission");
  }else{
    printf("\n You are not eligible for admission");
  }
  return 0;
}
