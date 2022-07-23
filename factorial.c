#include <stdio.h> 

int main(){
int n,fac=1,i=1;
printf("Enter the number \n");
scanf("%d",&n);
while ( i<=n)
{
    fac= fac*i;
    i++;
}



printf("the factor is %d \n",fac);
return 0; }