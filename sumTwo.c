/*
Aksa Vinod
07-02-2025
*/
#include <stdio.h>
int main(){
  int row,col,i,j;
  printf("Enter the no of rows and columns:");
  scanf("%d%d",&row,&col);
  int m1[row][col],m2[row][col],m3[row][col];
  printf("Enter the first matrix");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  printf("Enter the second matrix");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&m2[i][j]);
    }
  }

  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    m3[i][j]=m1[i][j]+m2[i][j];
   }
  }
  printf("sum=\n");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf(" %d\t",m3[i][j]);
    }
    printf("\n");
  }
  return 0;
}
