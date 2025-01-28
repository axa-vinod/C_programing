#include <stdio.h>
int main(){
  int year;
  printf("Enter a year");
  scanf("%d",&year);
  if (year%4==0&&year!=0||year%400==0){
    printf("The given is leap year");
  }else{
      printf("The given is not a leap year");
  }
  return 0;
}
