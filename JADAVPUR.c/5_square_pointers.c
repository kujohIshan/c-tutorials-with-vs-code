#include <stdio.h> 
void square(int *p)
{
*p = (*p) * (*p);

}
int main(){
int n;
printf(" enter the number to be squared \n");
scanf("%d",&n);
square(&n);
printf(" the squared value is %d \n",n);
return 0; }