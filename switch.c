#include<stdio.h>

int main(){

  int num1 = 2;
  int num2 = 4;
  int calc;
  printf("enter calc:");
  scanf("%d",&calc);

  switch (calc)
  {
    case 1:
    printf("%d",num1 + num2);
    break;
    case 2:
    printf("%d",num1 - num2);
    break;
    case 3:
    printf("%d",num1 * num2);
    break;
    case 4:
    printf("%d",num2/num1);
    break;
    default:
    printf("not valid");
    break;
  }

  

  return 0;
  
}