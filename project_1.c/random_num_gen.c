#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main(){
int number;
srand(time(0));
number = rand()%100 +1; // this is to keep the random number in between 1 and 100
printf("the number is %d", number);
return 0; }