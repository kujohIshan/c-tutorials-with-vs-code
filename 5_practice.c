#include <stdio.h> 

int main(){
int i,sum=0,n;
printf("enter the number \n");
scanf("%d", &n);
while (i<=n)
{
sum=sum+i;
i++;
}

printf("the sum is %d \n", sum);

return 0; }