#include<stdio.h>
#include<stdbool.h>

int main(){

  //0 = false,1 = true
  int x = 3;
  int y = 4;
   int z1 = x > y;
   int z2 = x < y;
   int z3 = x == y;
   int z4 = x != y;


  printf("%d\n",z1);
  printf("%d\n",z2);
  printf("%d\n",z3);
  printf("%d",z4);


  return 0;
  
}