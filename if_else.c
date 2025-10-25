#include<stdio.h>

int main(){

  int a;
  
  int b;
  int c;
  
 
  // scanf("%d",&a);
  // scanf("%d",&b);


  // if(a>b){
  //   printf("%d is largest among two numbers",a);
  // }
  
  // else{
  //   printf("%d is the largest amongst two numbers",b);
  // }
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  //a=12,b=10,c=9
  //a=9;b=10,c=12
  

  if(a>=b&& a>=c){
    printf(" %dis largest among two numbers",a);
  }
  
  else if(b>=a&&b>=c){
    printf(" %dis the largest amongst two numbers",b);
  }
  else{
    printf("%d is the largest",c);
  }

  return 0;
  
}