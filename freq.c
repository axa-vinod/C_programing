#include<stdio.h>
int main(){
 char str[250];
 printf("Enter the string");
 fgets(str,sizeof(str),stdin);
 int freq[26]=0;
 for(int i=0;str[i]!='\0';i++){
    char ch=str[i];
    if(str[i]>='A'&& str[i]<='Z'){
       ch=ch+32;
    }
    if (ch>='a'&& ch<='z'){
       freq[ch-97]++;
    }
 }
 for(int i=0;i<26;i++){
    if (freq[i]!=0){
       printf("%c : %d",i+97,freq[i]);
    }
 }
 return 0;
}
