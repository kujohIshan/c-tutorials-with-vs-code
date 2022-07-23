#include <stdio.h> 

int main(){
int i,sum=0;
for(i=1;i<=10;i++)
{
printf("8 X %d = %d \n",i,8*i);
sum = sum+(8*i);
}
printf("the sum is %d \n", sum);
return 0; }