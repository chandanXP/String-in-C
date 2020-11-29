#include<stdio.h>

int main(){
     char str[]="Chandan";
     // char str[] = {'C','h','a','n','d','a','n', '\0'};
     char *ptr = str;
     while (*ptr!='\0')
     {
          /* code */
          printf("%c",*ptr);
          ptr++;
     }
     
     return 0;
}