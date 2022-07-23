#include <stdio.h> 
int sum(int a, int b);
int main(){
int c;
c= sum(45,24);
printf("the sum of the numbers are %d\n",c);
return 0; }
int sum (int a, int b){
int result= a+b;
return result;
}