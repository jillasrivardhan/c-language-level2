#include<stdio.h>

int main(){

 int matrix[2][3] = {{1,2,3},
                     {4,5,6}};

  int size = sizeof(matrix)/sizeof(matrix[0][0]);

  printf("%d",size);

  // for(int i = 0; i < 2; i++){
  //   for(int j = 0;j < 3;j++){

  //    printf("%d ",matrix[i][j]);

  //   }



  // }

//  printf("%d ",matrix[0][2]);





  return 0;
  
}