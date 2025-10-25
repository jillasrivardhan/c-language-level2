#include<stdio.h>


//we can create our own function

// void lucky(){

//   printf("this is lucky\'new function\n");
//   //to execute the printf output you have to call the function in main function.by function name and '()'and semicolon.we can as many times we need.
//   int x = 4; 
//   int y = 8;
//   int sum = x + y;
//   printf("the value of x is %d and value of y is %d\n",x,y);
//   printf("%d\n",sum);
// }


//this method is by passing parameters


void math(int x,int y){
  int sum = x + y;
  printf("the value of x is %d and the value of y is %d and the sum of both is %d",x,y,sum);
}

int main(){

  // lucky();
  math(2, 3);
 
  return 0;
  
}