#include <stdio.h> 
void func(int *a);
int main(){
int i;
printf(" enter the value of i \n");
scanf("%d", &i);
func(&i);
return 0; }
void func(int *a)
{
printf("the new value is %d\n",*a*10);
}