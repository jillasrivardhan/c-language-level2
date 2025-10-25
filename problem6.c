#include<stdio.h>

int main(){

  char ch;
  printf("enter character:");
  scanf("%c",&ch);

  if(ch=='a'||ch =='e'||ch == 'i'|| ch == 'o'|| ch == 'u'){
    printf("it is vowel");
  }else{
    printf("not a vowel");
  }

  return 0;
  
}