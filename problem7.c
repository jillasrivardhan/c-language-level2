#include<stdio.h>

int main(){

  // int age;
  // printf("enter age:");
  // scanf("%d",&age);

  // if(age >=18){
  //   printf("you are eligible");
  // }else{
  //   printf("you r not eligible");
  // }
  int num;
  printf("enter num:");

  scanf("%d",&num);
 

  if(num % 5 == 0 && num % 11 == 0){
    printf("divisible");
  }else{
    printf("not");
  }



  return 0;
  
}