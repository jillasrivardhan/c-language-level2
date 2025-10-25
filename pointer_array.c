#include<stdio.h>

int main(){

  int x = 23;

  int *b = &x;

  b++;

  printf("%d\n",b);

  printf("%d",sizeof(b));

  return 0;
  
}