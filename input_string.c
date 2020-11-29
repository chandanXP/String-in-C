#include<stdio.h>

int main(){
     char s[43];
     printf("Enter your name: \n");
     scanf("%s", s);
     //input should be short enough
     printf("Your name is %s", s);
     return 0;
}