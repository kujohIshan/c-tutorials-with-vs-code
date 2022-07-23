#include <stdio.h> 
void fnc(int a);
int main(){
int i=69;
int *p;
p=&i;
printf("the address of i is %u\n",&i);
printf("the value of i is %d\n", *p);
fnc(i);
return 0; }
void fnc(int a)
{
printf("the address of variable is %u\n",&a);
}