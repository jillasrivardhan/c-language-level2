#include<stdio.h>

int main(){


  //explicit
  int a = 2;
  int b = 5;
  float sum = b / a;

  printf("%.2f\n",sum);


  //implicit
  int x = 3.5;//here we given float values but output was in int value.automatically converted
  int y = 9.5;
  int sum2 = y / x;
  printf("%d",sum2);

  return 0;
  
}
//type conversion is used for converting one data type to another data type.
//there are two types they are
//1.implicit == does automatically,2.explicit==done  manually