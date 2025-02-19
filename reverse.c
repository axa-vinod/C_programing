#include<stdio.h>
int main(){
 int len;
 char str[50],temp;
 printf("Enter the string");
 scanf("%s",str);
 for(len=0;str[len]!='\0';len++);
  int i=len-1;
  for(int j=0;j<len/2;j++){
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i--;
  }
 temp='\0';
 printf("The reversed string is %s",str);
 return 0;
}
