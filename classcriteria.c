#include <stdio.h>
int main(){
  int rollNo,phy,chy,maths,total;
  char name[30];
  float percentage;
  printf("\n Enter your name");
  fgets(name,sizeof(name),stdin);
  printf("\n Enter your roll no");
  scanf(" %d",&rollNo);
  printf("\n Enter your physics ,chemistry ,maths mark");
  scanf(" %d%d%d",&phy,&chy,&maths);
  total=phy+chy+maths;
  percentage=(float)total/300*100;
  printf("\n percentage of total marks is %f",percentage);
  if(percentage >=75){
      printf("\n First Class with Distinction");
  }else if(percentage >=60 && percentage <75){
      printf("\n First Class");
  }else{
      printf("\n Second Class");
  }
return 0;
}
