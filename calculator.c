#include <stdio.h>
int main(){
  int num1,num2;
  char operator;
  printf("\n Enter two integers");
  scanf("%d%d",&num1,&num2);
  printf("Enter the operator");
  scanf(" %c",&operator);
  switch(operator){
     case '+' :
       printf("%d+%d=%d",num1,num2,num1+num2);
       break;
     case '-' :
       printf("%d-%d=%d",num1,num2,num1-num2);
       break;
     case '*' :
       printf("%d*%d=%d",num1,num2,num1*num2);
       break;
    case '/':
      printf("%d/%d=%d",num1,num2,num1/num2);
      break;
  default:
   printf("error");
  }
  return 0;
}
