#include<stdio.h>

int main(){

  // int num;
  // int num2;

  // scanf("%d %d",&num,&num2);

  // printf("the first number is %d and second is %d",num,num2);



  //char name[30];

  // scanf("%s",&name);
  // printf("%s",name);
//for strings we often use fgets
//syntax is:fgets(variable name,variable size,stdin);

  // char name[30];

  // fgets(name,sizeof(name),stdin);

  // printf("%s",name);

  //memory address

  int age = 10;

  printf("%d\n",&age);

  int *ptr = &age;

  printf("%d\n",ptr);//prints address
  printf("%d",*ptr);//prints stored value in variable




  
  


  return 0;
  
}