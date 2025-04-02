#include<stdio.h>
typedef struct {
     int rollNo;
     char name[30];
     float m1,m2,m3;
     
}student;
int main(){
    int size,i,sum,tot=0,avg=0;
    student s[30];
    printf("Enter the elements of array");
    scanf("%d",&size);
    for(i=0;i<size;i++){
      printf("Enter the name");
      scanf("%s",s[i].name);
      printf("Enter the roll number");
      scanf("%d",&s[i].rollNo);
      printf("Enter the mark in English");
      scanf("%f",&s[i].m1);
      printf("Enter the mark in Maths");
      scanf("%f",&s[i].m2);
      printf("Enter the mark in Science");
      scanf("%f",&s[i].m3);
    }
    for(i=0;i<size;i++){
      tot=tot+s[i].m1+s[i].m2+s[i].m3;
      avg=tot/size;
    }
    printf("\nThe total mark is :%d",tot);
    printf("\nThe average of mark of these students :%d",avg);
   return 0;
}
