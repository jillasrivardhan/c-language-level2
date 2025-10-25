#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

//0:rock,1:paper,2:scissor
     int x;
     printf("enter number:",x);
    scanf("%d",&x);

   srand(time(0));
   int num = rand() % 3;   // generates a random number
    printf("Random number: %d\n", num);

    // if(rand() == 0 && x == 2){
    //   printf("you won");
    // }

    if(x == 0 && num == 2||x == 1 && num == 0||x == 2 && num == 1){

      printf("you won the match");

    }else if(x == num){

      printf("it\'s a tie");

    }
    else
    {

      printf("you lost");

    }
    
    return 0;
  
}