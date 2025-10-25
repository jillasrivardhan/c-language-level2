#include<stdio.h>

int main(){

  int age = 10;

  printf("%d\n",&age);

  int *ptr = &age;

  printf("%d\n",ptr);//prints address
  printf("%d",*ptr);//prints stored value in variable

  return 0;
  
}