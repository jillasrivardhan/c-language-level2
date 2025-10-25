#include<stdio.h>

int main(){

//prints square stars
  // for(int i = 1;i < 6;i++){
  //    for(int j = 1;j < 6;j++){
  //      printf("*");
  // }
  //  printf("\n");

  // }

//prints right angle triangle
// for(int i = 1;i < 6;i++){
//      for(int j = 1;j < i;j++){
//        printf("*");
//   }
//    printf("\n");

//   }


//reverse right angle triangle

  // for(int i = 1;i < 6;i++){
  //    for(int j = 5;j > i;j--){
  //      printf("*");
  // }
  //  printf("\n");

  // }


  //opposite right angled triangle

  // for(int i = 1;i < 6;i++){
  //   for(int j = 5;j > i;j--){
  //     printf(" ");
  //   }
  //   for(int j = 1;j <= i;j++){
  //     printf("*");
  //   }
  //   printf("\n");

  // }

//pyramid
 

  // for(int i = 1;i < 5;i++){

  //   for(int j = 1;j <= 5 - i;j++){
  //     printf(" ");

  //   }
  //   for(int k = 1;k <= 2*i-1;k++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  
  int rows = 5;
  for(int i = 1;i <= rows;i++){

    for(int j = 1;j <= i*1;j++){
      printf("*");
     
    }
    printf("\n");
  }




  
   
  
  return 0;
  
}