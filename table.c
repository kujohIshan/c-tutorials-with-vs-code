#include <stdio.h> 

int main(){
int n, i=1;
printf("enter the number \n");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
printf("%d  \n", n*i);
}

return 0; }