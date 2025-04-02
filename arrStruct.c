#include<stdio.h>
typedef struct {
     int rollNo;
     char name[30];
     float cgpa;
     
}student;
int main(){
    int size,i;
    student s[30];
    printf("Enter the elements of array");
    scanf("%d",&size);
    for(i=0;i<size;i++){
      printf("Enter the name");
      scanf("%s",s[i].name);
      printf("Enter the roll no");
      scanf("%d",&s[i].rollNo);
      printf("Enter the cgpa");
      scanf("%f",&s[i].cgpa);
    }
    printf("The student details:");
    for(i=0;i<size;i++){
      printf("\nName:%s",s[i].name);
      printf("\nRoll No:%d",s[i].rollNo);
      printf("\ncgpa:%f",s[i].cgpa);
    }
    return 0;
}
