#include<stdio.h>
int main(){
 char value;
 printf("Enter a small letter");
 value=getchar();
 value=value-32;
 printf("Upper case letter: %c\n",value);
 return 0;
}
