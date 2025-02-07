/*
Aksa Vinod
07-02-2025
To find the transpose of the matrix
*/
#include <stdio.h>
int main(){
  int row,col,i,j;
  printf("Enter the no of rows and columns:");
  scanf("%d%d",&row,&col);
  int m1[row][col];
  printf("Enterthe numbers"); 
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  printf("The transpose matrix is:\n");
  for(i=0;i<col;i++){
    for(j=0;j<row;j++){
      printf("%d\t",m1[j][i]);
    }
    printf("\n");
  }
  return 0;
}


