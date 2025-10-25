#include<stdio.h>

int main(){

  int marks;
  printf("enter marks:");
  scanf("%d",&marks);

  if(marks >= 90){
    printf("grade A");
  }else if(marks <= 89 && marks >= 80){
    printf("grade B");
  }else if(marks <= 79 && marks >= 70){
    printf("grade C");
  }else if(marks <= 69 && marks >= 60 ){
    printf("grade D");
  }else{
    printf("you are failed");
  }

  
  return 0;
  
}