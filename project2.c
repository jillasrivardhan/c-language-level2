#include<stdio.h>

int main(){

  int highest = 0;
  int lowest = 0;
  int arr[4];
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int j = 0;j < size;j++){
    printf("enter marks:",arr);
    scanf("%d",&arr);

  }

  for(int i = j;i < j;i++){

    
     if(lowest > arr[i] ){
       
      lowest = arr[i];

      printf("%d",lowest);

    }
    if(highest < arr[i]){

      highest = arr[i];

      printf("%d",highest);

    }

  }

  return 0;
}