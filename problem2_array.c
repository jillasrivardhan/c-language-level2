#include<stdio.h>

int main(){

  int ages[] = {3,5,7,1,9};

   int lowest = ages[0];

  int size = sizeof(ages)/sizeof(ages[0]);

  for(int i = 0; i < size; i++){

    

    if(lowest > ages[i] ){
       
      lowest = ages[i];

      printf("%d",lowest);

    }


  }

  return 0;
  
}