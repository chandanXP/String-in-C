#include<stdio.h>
#include <string.h>

int main(){
     char st1[50] = "Hello";
     char *st2 = "Chandan";
     strcat(st1,st2);//this will concatinate two string values
     //Target string should have enough capacity to store the source string.
     printf("Now the st1 is %s", st1);//final value will be in st1
     return 0;
}