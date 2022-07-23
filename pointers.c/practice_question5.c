#include <stdio.h> 

int main(){
int i =6969;
int*j;
int **k;
j= &i;
k= &j;
printf("the value of i is %d",**k);
return 0; 
}   