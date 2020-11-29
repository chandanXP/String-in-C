#include<stdio.h>
#include<string.h>

int main(){
     char *st = "this";
     char st2[45];
     strcpy(st2,st);//This function is used t ocopy from one string to other
     //Target string should have enough capacity to store the source string.
     printf("Now the st2 is %s", st2);
     return 0;
}