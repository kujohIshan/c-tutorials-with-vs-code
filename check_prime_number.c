#include <stdio.h> 

int main(){
int n,i,c=0;
printf("Enter the number \n");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
if (n%i==0)
{
c++;
}
}
if (c==2)
{
printf("the number%d is prime\n",n);
}
else
{
printf("the number%d is not prime\n",n);
}



return 0; }