#include<stdio.h>
struct student{
      int rollNo;
      char name[20];
      float cgpa;
};
int main(){
    struct student s1;
    printf("Enter the roll number");
    scanf("%d",&s1.rollNo);
    printf("Enter your name");
    scanf("%s",s1.name);
    printf("Enter the CGPA");
    scanf("%f",&s1.cgpa);
    printf("The student details:");
    printf("\nName:%s",s1.name);
    printf("\nRoll No:%d",s1.rollNo);
    printf("\nCGPA:%f",s1.cgpa);
    return 0;
}
