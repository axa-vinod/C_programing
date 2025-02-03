#include <stdio.h>
int main(){
  int tem;
  printf("Enter the temperature in Centigrade");
  scanf("%d",&tem);
  if(tem<0){
    printf("Freezing Weather");
  }else if(tem>=0&&tem<=10){
      printf("Very Cold Weather");
  }else if(tem>10&&tem<=20){
      printf("Cold Weather");
  }
  return 0;
}
