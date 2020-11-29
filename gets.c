#include<stdio.h>

int main(){
     char s[43];
     printf("Enter your name: \n");
     gets(s);//"gets" whic will receive multiple string
     //input should be short enough
     // printf("Your name is %s", s);
     puts(s);
     return 0;
}