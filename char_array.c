#include<stdio.h>

int main(){

  char grades[] = {'a','d','f','e'};

   int size = sizeof(grades)/sizeof(grades[0]);

  printf("%d\n",size);

  printf("%c ",grades[0]);

//printf("%d",sizeof(char));

  return 0;
  
}