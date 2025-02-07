
#include <stdio.h>
int main(){
  int row,col,i,j;
  printf("Enter the no of rows and columns:");
  scanf("%d%d",&row,&col);
  printf("Enter the numbers");
  int matrix[row][col];
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
     scanf("%d",&matrix[i][j]);
    }
  }
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      if(i==j){
        matrix[i][j]=0;
      }
    }
  }
  printf("The new matrix is:");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
