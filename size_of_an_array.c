#include<stdio.h>

int main(){

  
//we can know the size of a array
  // int numbers[] = {1,2,3,4,5};

  // int size = sizeof(numbers)/sizeof(numbers[0]);

  // printf("%d",size);

  //printing elements using size in for loop

  // int ele[] = {1,3,5,7};

  // int size = sizeof(ele)/sizeof(ele[0]);

  // for(int i = 0;i < size;i++){

  //   printf("%d ",ele[i]);

  // }


  int marks[5] = {0};

  for(int i = 1;i < 5;i++){

    printf("enter marks:");
    scanf("%d ",&marks[i]);

  }
   



  // printf("these are total marks %d of a student");
  





  return 0;
  
}