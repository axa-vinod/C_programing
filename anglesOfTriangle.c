#include <stdio.h>
int main(){
 int angle1,angle2,angle3,sum;
 printf("Enter the three angles");
 scanf(" %d %d %d",&angle1,&angle2,&angle3);
 sum=angle1+angle2+angle3;
 if(sum==180){
    printf("Valid Triangle");
 }else{
     printf("Invalid Triangle");
 }
 return 0;
}
