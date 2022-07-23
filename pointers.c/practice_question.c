#include <stdio.h> 

int main(){
int i =69;
int*j = &i;
printf(" the address of i is %u\n", j);
printf(" thr value of i is %u \n", *j);
return 0; }