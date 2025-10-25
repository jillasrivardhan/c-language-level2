#include<stdio.h>

int main(){
  int a = 3;
  float pi = 3.14;
  char c = 'D';

  printf("the value of int is: %d \n the value of float is:%.3f\n the value of char is:%c\n",a,pi,c);

  char name[] = "lucky";
  printf("%s\n",name);


  double num = 19.96;
  printf("%lf\n",num);

  //to print 10 to the power values we use a special character 'e'or 'E'
  float num1 = 2e3;
  printf("%.3f",num1);

  return 0;
  
}
// there are 3 main variables that are mostly used
// int,char,float
//int for integers like 1,2,3,4
//char for single characters like 'a','d','f'
//float for decimal values like 3.14,7.86
//to print these values in printf we use format specifiers for int = %d,char = %c,float = %f.