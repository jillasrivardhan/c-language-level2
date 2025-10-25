#include<stdio.h>

int main(){

  int x = 1;
  while(x<5){

    if(x == 2){
      x++;
      continue;
    }

    printf("%d\n",x);
    x++;

  }
  int x = 1;
  while(x<5){

    if(x == 2){
      
      break;
    }

    printf("%d\n",x);
    x++;

  

  return 0;
  
}