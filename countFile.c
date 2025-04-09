#include<stdio.h>
int main(){
   FILE*fp;
   fp=fopen("char.txt","r");
   int wordCount=0,sentCount=0,lineCount=0;
   char ch;
   while(fscanf(fp,"%c",&ch)==1){
    if(ch==' '||ch=='.'){
      wordCount++;
    }if(ch=='.'){
        sentCount++;
    }if(ch=='\n'){
       lineCount++;
    }
  }
  fclose(fp);
  printf("Word count: %d\n",wordCount);
  printf("Sentence count :%d\n",sentCount);
  printf("Line count: %d\n",lineCount);
  return 0;
}
        
      
