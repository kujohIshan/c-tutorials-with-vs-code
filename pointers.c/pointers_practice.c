#include <stdio.h> 

int main(){
int i=3,j,*k;
j=&i;
k=&j;



printf("the adderess of i is %u \n",&i);
printf("the address of i is %u \n", j);
printf("the address of i is %u \n",*k);
printf(" address of j is %u \n",&j);
printf("address of j is %d \n", k);
printf(" address of k is %u \n",&k);
return 0; }