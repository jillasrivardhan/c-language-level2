#include<stdio.h>

int main(){

  int year;
  int a;
  printf("enter year:");
  scanf("%d",&year);

  if(year%400==0||year%4==0&&year%100!=0){
    printf("it is leap year");
  }
  else{
    printf("not a leap year");
  }

  return 0;
  
}