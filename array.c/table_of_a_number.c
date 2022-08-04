#include <stdio.h> 

int main(){
int mul[10];
int n;
printf("enter the number for multiplication\n");
scanf("%d",&n);
for (int i = 0; i < 10; i++)
{
mul[i]= n*(i+1);
}
for (int i = 0; i < 10; i++)
{
    printf("%d X %d = %d \n ",n, i+1,mul[i]);
}
return 0; }