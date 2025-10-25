#include<stdio.h>

int main(){

  int ages[] = {6,7,8,4,2};

  int sum = 0;

  int avg = sizeof(ages)/sizeof(ages[0]);

  for(int i = 0; i < avg; i++){

      printf("%d\n ",ages[i]);

      sum = sum + ages[i];
 

  }

  int total = sum/avg;
  printf(" the avg is:%d",total);

  return 0;
  
}