#include<stdio.h>
#include <string.h>

int main(){
     char st1[50] = "kello";
     char *st2 = "mhandan";
     int val = strcmp(st1,st2);//this will compare two string values
     //Target string should have enough capacity to store the source string.
     printf("Now the st1 is %d", val);//final value will be in st1
     return 0;
}
//Output will be 0 if strings are same.