#include<stdio.h>
#include<string.h>
int main(){
 char str1[30],str2[30];
 printf("Enter your first sentence");
 fgets(str1,sizeof(str1),stdin);
 printf("Enter your second sentence");
 fgets(str2,sizeof(str2),stdin);
 int comp=strcmp(str1,str2);
 if(comp==0){
  printf("These two sentence are equal");
 }else{
  printf("These sentence are not equal");
  }
return 0;
}
