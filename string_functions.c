#include<stdio.h>
#include<string.h>

int main(){

 //to write string functions we need string header file 

 //functions like:strlen(),strcat(),strcpy(),strcmp()


 char str1[] = "lucky";
  //printf("%s\n",sizeof(str1));
 //strlen(str1);
//  printf("%zu ",strlen(str1));

char str2[] = "jilla";

  // strcat(str1,str2);

  // printf("%s",str1);//output:luckyjilla

  char str3[] = "manasa";
  char str4[20];


  strcpy(str4,str3);

  // strcat(str3,str2);

  // printf("%s",str3);//output:manasajilla
   printf("%s\n",str4);//output:manasa

   char str5[] = "manasa";

   strcmp(str4,str5);
   printf("%d",strcmp(str4,str5));//output:0 means true,same


 

  return 0;
  
}