/**
Define a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder. Use macros for constant values.
Aksa Vinod
**/
#include<stdio.h>
#define pi 3.14
int main(){
    float rad,areaci;
    printf("Enter the radius");
    scanf("%f",&rad);
    areaci=pi*rad*rad;
    printf("Area of circle=%f",areaci);
    float r,h,areacy;
    printf("\n Enter the radius and height of cylinder");
    scanf("%f %f",&r,&h);
    areacy=2*pi*r*(r+h);
    printf("\n Area of cylinder=%f",areacy);
    return 0;
}
