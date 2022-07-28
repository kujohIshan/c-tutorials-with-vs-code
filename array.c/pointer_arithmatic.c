#include <stdio.h> 

int main(){
char c= 69;
char *ptr =&c;
printf("the address of c is %u \n", ptr);
ptr++;
printf(" the new value of ptr is %u\n", ptr);
return 0; }