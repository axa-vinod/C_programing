#include<stdio.h>
int main(){
 int n,i,j;
 printf("Enter the number of elements");
 scanf("%d",&n);
 printf("Enter the %d number",n);
 int num[n];
 for(i=0;i<n;i++){
  scanf("%d",&num[i]);
 }
 for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i;j++){
    if(num[j]>num[j+1]){
      int temp=num[j];
      num[j]=num[j+1];
      num[j+1]=temp;
    }
   }
 }
 printf("The sorted array:");
 for(int i=0;i<n;i++){
   printf("%d\t",num[i]);
 }
 return 0;
}
