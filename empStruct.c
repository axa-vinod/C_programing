#include<stdio.h>
typedef struct {
     int id;
     char name[30];
     float sal;
     
}employee;
int main(){
    int size,i;
    employee d[30];
    printf("Enter the elements of array");
    scanf("%d",&size);
    for(i=0;i<size;i++){
      printf("Enter the name");
      scanf("%s",d[i].name);
      printf("Enter the ID");
      scanf("%d",&d[i].id);
      printf("Enter the salary");
      scanf("%f",&d[i].sal);
    }
    printf("The employee details:");
    for(i=0;i<size;i++){
      printf("\nName:%s",d[i].name);
      printf("\nID:%d",d[i].id);
      printf("\nSalary:%f",d[i].sal);
    }
    return 0;
}
