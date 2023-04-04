#include <stdio.h> 
int sum_of_digits(int n);
int main(){
int n;
printf("enter the number \n");
scanf("%d",&n);
printf("The sum is %d",sum_of_digits(n));

return 0; }
int sum_of_digits(int n)
{
    if (n==0)
    {
    return 0;
    }
    else
    {
        return(n%10 + sum_of_digits( n/10));
    }
    
}